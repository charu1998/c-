#include<stdio.h>
int main()
{
    int a;
    printf("enter a value");
    scanf("%d",&a);
    if(a%2==0)
    {
        a=a/2;
        printf("%d",a);
    }
    if(a%2!=0)
    {
        printf("%d",a);
    }
    return 0;
}
