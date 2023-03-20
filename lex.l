/* Implementation of LEX Tool */
%{
/*lex program to recognise a C program*/ 
int COMMENT=0;
%}
identifier [a-zA-Z][a-zA-Z0-9]*
%%
"/* {COMMENT =1; printf("\n \n \t %s COMMENT BEGINS \n",yytext);}
"//".*{COMMENT=0; printf("\n\n\t%s COMMENT ENDS \n",yytext);}
#. {printf("\n%s is a PREPROCESSOR DIRECTIVE",yytext);} 
int | float | char | double | while | for | do | if | break | continue | void | switch | case | long | struct | const | typedef | return | else | enum | default | union | extern | auto | static | register | restrict | volatile | sizeof | inline | short | signed | goto {if(!COMMENT) printf("\n\t%s is a KEYWORD",yytext);}
{identifier}\( {if(!COMMENT)printf("\n\n FUNCTION \n\t %s",yytext);}

\{ {if(!COMMENT)printf("\n BLOCK BEGINS");}
\} {if(!COMMENT)printf("\n BLOCK ENDS");}
{identifier} {if(!COMMENT)printf("\n%s IDENTIFIER",yytext);}
\".*\" {if(!COMMENT)printf("\n\t%s is a STRING",yytext);}
[0-9]+ {if(!COMMENT)printf("\n\t%s is a NUMBER",yytext);}
\)(\;)? {if(!COMMENT)printf("\n\t");ECHO;printf("\n");}
\( ECHO;
= {if(!COMMENT)printf("\n\t%s is an ASSIGNMENT OPERATOR",yytext);}
\<= |
\>= |
\< |
== |
\> {if(!COMMENT)printf("\n\t%s is a RELATIONAL OPERATOR",yytext);}
%%

int main(int argc,char** argv)
 FILE *file;
if(argc>1)
{
file=fopen(argv[1],"r");
if(!file)
{
printf("Could not open %s\n", argv[1]);
exit(0);
}
yyin=file;
}
