#include<stdio.h>
int main()
{
    char a[10];
    int i,n,t,c=0;
    printf("Enter the string");
    scanf("%s",&a[i]);
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    t=c-n;
    for(i=t;i<=c;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
