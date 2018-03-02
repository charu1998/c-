#include<stdio.h>
int main()
{
    int a[10],i,n,k;
    printf("enter n valure");
    scanf("%d",&n);
    printf("enter k value");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d ",&a[i]);
        printf("\n");
    }
    for(i=1;a[i]!='\0';i++)
    {
        if(i==k)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
    
    
}
