#include<stdio.h>
int main()
{
    int n,d,rev;
    printf("Enter n value");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}
