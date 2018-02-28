#include<stdio.h>
int main()
{
    int a,b,c,d,gcd,t;
    printf("enter 2 values");
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    while(d!=0)
    {
        t=d;
        d=c%d;
        c=t;
    }
    gcd=(a*b)/c;
    printf("GCD value is %d",gcd);
    return 0;
}
