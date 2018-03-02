#include<stdio.h>
int main()
{
    int n,m[10],i,sum=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&m[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+m[i];
            }
            printf("Sum=%d",sum);
    return 0;
}
