#include<stdio.h>
int main()
{
    int i,n,k,a[10],flag=0;
    printf("Enter n,k");
    scanf("%d %d",&n,&k);
    printf("entre the array");
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]==k)
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
