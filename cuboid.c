#include<stdio.h>
int main()
{
    int l,h,b,a,v;
    printf("enter the l,h,b values");
    scanf("%d %d %d",&l,&h,&b);
    v=l*b*h;
    a=2*(l*h+h*b+b*l);
    printf("Area=%d\nVolume=%d",a,v);
    return 0;
}
