#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
FILE *input, *output;
int l=1;
int t=0;
int j=0;
int i,flag;
char ch,str[20];
input = fopen("input.txt","r");
output = fopen("output.txt","w");
char keyword[30][30]={"int","main","if","else","do","while","void","include"};
fprintf(output,"Line no. \t Token no. \t\t Token \t\t Lexeme\n\n");
while(!feof(input))
{
i=0;
flag=0;
ch=fgetc(input);
if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=')
{
fprintf(output,"%7d\t\t %7d\t\t Operator\t %7c\n",l,t,ch);
t++;
}
else if(ch == ';' || ch  == '{' || ch == '}' || ch  == '(' || ch == ')' || ch == '?' || ch == '@' || ch == '!' || ch == '%')
{
fprintf(output,"%7d\t\t %7d\t\t Special Symbol\t %7c\n",l,t,ch);
t++;
}
else if(isdigit(ch))
{
while(isdigit(ch))
{
str[i]=ch;
i++;
ch=fgetc(input);
}
fseek(input, -1, SEEK_CUR);
str[i]='\0';
 fprintf(output,"%7d\t\t %7d\t\t Digit\t %7s\n",l,t,str);
t++;
}
else if(isalpha(ch))
{
str[i]=ch;
i++;
ch=fgetc(input);
while(isalnum(ch) && ch!=' ')
{
str[i]=ch;
i++;
ch=fgetc(input);
}
str[i]='\0';
fseek(input, -1, SEEK_CUR);
for(j=0;j<=30;j++)
{
if(strcmp(str,keyword[j])==0)
{
flag=1;
break;
}
}
if(flag==1)
{
fprintf(output,"%7d\t\t %7d\t\t Keyword\t %7s\n",l,t,str);
t++;
}
else
{
fprintf(output,"%7d\t\t %7d\t\t Identifier\t %7s\n",l,t,str);
t++;
}
}
else if(ch =='\n')
{
l++;
}
}
fclose(input);
fclose(output);
return 0;
}