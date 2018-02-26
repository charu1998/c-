#include<stdio.h>
int main()
{
    int n,l,r;
    printf("enter the n");
    scanf("%d",&n);
    printf("enter l,r");
    scanf("%d %d",&l,&r);
    if(n>=l&&n<=r)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
    
}
