#include<stdio.h>
int main()
{
    int num,i,n,k;
    printf("enter the input lines");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
     scanf("%d %d",&k,&n);
     if(k>n)
     {
         printf("%d\n",k-n);
        }
        else
        {
            printf("%d",n-k);
        }
    }
    return 0;
}
