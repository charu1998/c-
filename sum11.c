#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("enter the a value");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("Sum is %d",sum);
    return 0;
}
