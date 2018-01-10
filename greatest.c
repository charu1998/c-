#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values of a,b,c",a,b,c);
scanf("%d %d %d",&a,&b,&c);
if(a>c&&a>b)
{
printf("A is greater");
}
if(b>a&&b>c)
{
printf("B is greater");
}
if(c>a&&c>b)
{
printf("C is greater");
}
return 0;
}
