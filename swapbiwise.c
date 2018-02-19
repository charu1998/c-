#include<stdio.h>
int main()
{
	int a,b,temp=0;
	printf("enter the a,b values");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d",a,b);
	return 0;
}
