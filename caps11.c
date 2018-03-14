#include<stdio.h>
int main()
{
    char a[100];
    int n,i;
    printf("enter the string");
    scanf("%[^\n]s",&a);
    n=strlen(a);
    for(i=0;i<=n;i++)
    {
        a[0]-=32;
        if(a[i]==' ')
        {
            a[i+1]-=32;
        }
        printf("%c",a[i]);
    }
    return 0;
}
