// Exercise 7b 
#include<stdio.h>
#include<string.h>
int main()
{
char gram[20],part1[20],part2[20],modifiedGram[20],newGram[20],tempGram[20];
int i,j,k,l,f,f1=0,pos;
printf("Enter Production : A->");
gets(gram);
for(i=0;gram[i]!='l';i++,j++)
part1[j]=gram[i];
part1[j]='\0';
for(j=++i,i=0;gram[j]!='\0';i++,j++)
part2[i]=gram[j];
part2[i]='\0';
for(i=0;i<strlen(part1)||i<strlen(part2);i++)
{
if(part1[i]==part2[i])
{
modifiedGram[k]=part1[i];
k++;
pos=i+1;
}
}
for(i=pos,j=0;part1[i]!='\0';i++,j++)
{
f=1;
newGram[j]=part1[i];
}
if(f==0)
newGram[j++]='e';
newGram[j++]='l';
for(i=pos;part2[1]!='\0';i++,j++)
{
f1=1;
newGram[j]=part2[i];
}
if(f1==0)
newGram[j++]='e';
modifiedGram[k]='X';
modifiedGram[++k]='\0';
newGram[j]='\0';
printf("\nGrammar Without Left Factoring : : \n");
printf(" A->%s",modifiedGram);
printf("\n X->%s\n",newGram);
}
