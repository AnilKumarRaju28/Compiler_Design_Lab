#include<stdio.h>
#include<string.h>
char s[20],stack[20];
void main()
{
    char m[5][6][3]={"TB","","","TB","","","","+TB","","","n","n","FC","","","FC","","","","n","*FC","","n","n","i","","","(E)","",""};
    int size[5][6]={2,0,0,2,0,0,0,3,0,0,1,1,2,0,0,2,0,0,0,1,3,0,1,1,1,0,0,3,0,0};
    int i,j,k,n,str1,str2;
    printf("\n Enter the input string: ");
    scanf("%s",s);
    strcat(s,"$");
    n=strlen(s);
    stack[0]='$';
    stack[1]='E';
    i=1;
    j=0;
    printf("\nStack Input\n");
    printf("");
    while((stack[i]!='$')&&(s[j]!='$'))
    {
        if(stack[i]==s[j])
        {
            i--;
            j++;
        }
    }
   
}
