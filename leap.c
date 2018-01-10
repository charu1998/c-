#include<stdio.h>
int main()
{
int y;
printf("Enter the year",y);
scanf("%d",&y);
if(y%4==0)
{
printf("%d is leap year",y);
}
else
{
printf("%d is non-leap year",y);
}
return 0;
}
