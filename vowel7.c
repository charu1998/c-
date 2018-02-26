#include<stdio.h>
int main()
{
    char s[100];
    int i,t=0;
    printf("enter the string");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            t++;
        }
    }
    if(t>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
