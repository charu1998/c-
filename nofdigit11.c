#include<stdio.h>
int main()
{
    int c,count=0;
    printf("enter the number");
    scanf("%d",&c);
    while(c!=0)
    {
        c=c/10;
        count ++;
    }
    printf("number of digits is %d",count);
    return 0;
}
