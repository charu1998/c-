#include<stdio.h>
int main()
{
    int n,k,r,r1,rev=0,count=0;
    scanf("%d %d",&n,&k);
    if(k==0)
    {
        n=n*10;
    }
    while(k>0)
    {
        r=k%10;
        rev=rev*10+r;
        k=k/10;
        count++;
    }
    while(rev>0)
    {
        r1=rev%10;
        n=n*10+r1;
        rev=rev/10;
    }
    printf("%d",n);
    return 0;
}
