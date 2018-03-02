#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            count ++;
        }
    }
    if(count==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
