#include<stdio.h>
int main()
{
    char s[100];
    int i,count=0;
    printf("enter the string");
    scanf("%s",&s[i]);
    for(i=0;s[i]!='\0';i++)
     {
         if(s[i]==s[i+1])
         {
             count ++;
         }
     } 
     if(count==0)
     {
         printf("Yes");
     }
     else
     {
         printf("No");
     }
     return 0;
}
