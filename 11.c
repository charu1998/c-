#include<stdio.h>
int main()
{
    int a[10],i,n,k,temp=0;
    printf("enter n,k");
    scanf("%d %d",&n,&k);
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        

        if(i==k-1)
        {
            printf("\n%d",a[i]);
        }
    }
    return 0;
}
