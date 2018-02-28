#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char s[20];
    printf("enter the string");
    scanf("%s",&s[i]);
    l=strlen(s);
    printf("%d",l);
    for(i=0;i<=l;i++)
    {
        if(s[i]%2!=0)
        {
            printf("%c",s[i]);
        }
    }
    printf("\t");
    for(i=0;i<=l;i++)
    {
        if(s[i]%2==0)
        {
            printf("%c",s[i]);
        }
    }
    return 0;
    
}
