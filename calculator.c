#include<stdio.h>
int main()
{
    int a,b,d,mod;
    printf("enter the numbers");
    scanf("%d %d",&a,&b);
    d=a/b;
    mod=a%b;
    printf("%d\n%d",d,mod);
    return 0;
}
