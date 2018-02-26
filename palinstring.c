#include<stdio.h>
#include<string,h>
int main()
{
    char a[20],b[20],c[20];
    printf("enter the string");
    scanf("%s",&a);
    b=strcpy(a);
    c=strrev(a);
    if(strcmp(b,c)==1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
