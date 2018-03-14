#include<stdio.h>
int main()
{
    int a,d,n,i,sum=0;
    printf("enter a,d,n values");
    scanf("%d %d %d",&a,&d,&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+a;
        a=a+d;
    }
    printf("\n%d",sum);
    return 0;
}
