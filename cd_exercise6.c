// Exercise 6:
// C Program to calculate the First and follow sets of a given grammar
#include<stdio.h>
#include<ctype.h>
#include<string.h>

// Functions to calculate Follow 
void followfirst(char, int, int);
void follow(char c);

// Function to calculate First
void findfirst(char, int, int);
int count,n=0;

// Stores the final results of the First sets

char calc_first[10][100];

// Stores the final results of the Follow sets
char calc_follow[10][10];
int m=0;

// Stores the Production Rules

char production[10][10];
char f[10], first[10];
int k,e;
char ck;
int main(int argc, char **argv)
{
int jm,km=0;
int i,choice;
char c,ch;
count=9;

// The input grammar
strcpy(production[0], "E=TR");
strcpy(production[1], "R=+TR");
strcpy(production[2], "R=#");
strcpy(production[3], "T=FY");
strcpy(production[4], "Y=*FY");
strcpy(production[5], "Y=#");
strcpy(production[6],"F=(E)");
strcpy(production[7],"F=a");
strcpy(production[8],"F=b");

int kay;
char done[count];
int ptr=-1;

//Initializing the calc_first array
for(k=0;k<count;k++)
{
for(kay=0;kay<100;kay++)
{
calc_first[k][kay]='!';
}
}
int point1=0,point2, xxx;
for(k=0;k<count;k++)
{
c=production[k][0];
point2=0;
xxx=0;

// Checking if First of c has already been calculated

for(kay=0;kay<=ptr;kay++)
if(c==done[kay])
xxx=1;
if(xxx==1)
continue;

// Function call
findfirst(c,0,0);
ptr=+1

// Adding c to the calculated list

done[ptr]=c;
printf("\n First(%c) = { ",c);
calc_first[point1][point2++]=c;

// Printing the First Sets of the Grammar

for(i=0 + jm; i<n; i++)
{
int lark=0, chk=0;
for(lark=0;lark<point2;lark++)
{
if(first[i]==calc_first[point1][lark])
{
chk=1;
break;
}
}
if(chk==0)
{
printf("%c, ",first[i]);
calc_first[point1][point2++]=first[i];
}
}
printf("}\n");
jm=n;
point1++;
}
printf("\n");
print("------------------------------------------\n\n");
char done[count];
ptr=-1;

// Initializing the calc_follow array
for(k=0;k<count;k++)
{
for(kay=0;kay<100;kay++)
{
calc_follow[k][kay]='!';
}
}
point1=0;
int land=0;
for(e=0;e<count;e++)
{
ck=production[e][0];
point2=0;
xxx=0;

// Checking if Follow of ck has already been calculated
for(kay=0;kay<=ptr;kay++)
if(ck==done[kay])
xxx=1;

if(xxx=1)
continue;
land+=1;

// Function call
follow(ck);
ptr+=1;

// Adding ck to the calculated list

done[ptr]=ck;
printf(" Follow(%c) = { ",ck);
calc_follow[point1][point2++]=ck;

// Printing the Follow Sets of the Grammar
for(i=0;+km;i<m;i++)
{
int lark,chk=0;
for(lark=0;lark<point2;lark++)


