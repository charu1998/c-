#include<stdio.h>
int main()
{
    int a[20],n,i;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("\n%d",--a[i+1]);
            break;
        }
    }
    return 0;
}
