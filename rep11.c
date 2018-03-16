#include<stdio.h>
int main()
{
    int n,k,i,a[10],count=0;
    printf("enter n,k");
    scanf("%d %d",&n,&k);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            count ++;
        }
    }
    printf("count is %d",count);
    return 0;
    
}
