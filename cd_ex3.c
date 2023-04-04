// Write a C Program to stimulate lexical analyzer for validating operators AS INPUT STRING

#include<stdio.h>
#include<string.h>
void valida(char[]);
void main()
{
char s[5],v[5];
int i=0;
printf("Enter any Operator:");
gets(s);
valida(s);
}
void valida(char s[])
{
if(strcmp(s,"<=")==0)
printf("Less than or Equal");
else if(strcmp(s,"<")==0)
printf("Less than");
else if(strcmp(s,">=")==0)
printf("Greater than or Equal");
else if(strcmp(s,">")==0)
printf("Greater than");
else if(strcmp(s,"==")==0)
printf("Comparision");
else if(strcmp(s,"=")==0)
printf("Assignment Operator");
else if(strcmp(s,"!=")==0)
printf("Not Equals To");
else if(strcmp(s,"!")==0)
printf("Bitwise Not");
else if(strcmp(s,"&&")==0)
printf("Logical And");
else if(strcmp(s,"&")==0)
printf("Bitwise And");
else if(strcmp(s,"||")==0)
printf("Logical Or");
else if(strcmp(s,"|")==0)
printf("Bitwise Or");
else if(strcmp(s,"++")==0)
printf("Increment");
else if(strcmp(s,"--")==0)
printf("Decrement");
else if(strcmp(s,"+")==0)
printf("Addition");
else if(strcmp(s,"-")==0)
printf("Subtraction");
else if(strcmp(s,"**")==0)
printf("Exponential");
else if(strcmp(s,"*")==0)
printf("Multiplication");
else if(strcmp(s,"//")==0)
printf("Interger Division");
else if(strcmp(s,"/")==0)
printf("Division");
else if(strcmp(s,"%")==0)
printf("Remainder");
else
printf("Invalid Operator");
}

