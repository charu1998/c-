#include<stdio.h>
int main()
{
    int m[10],n,i,p=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=1;i<=n;i++)
    {
        p=p*m[i];
    }
    printf("product=%d",p);
    return 0;
}
