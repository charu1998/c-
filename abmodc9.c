#include<stdio.h>
int main()
{
    int a,b,c,r;
    printf("enter the values");
    scanf("%d %d %d",&a,&b,&c);
    r=a*b%c;
    printf("\n%d",r);
    return 0;
}
