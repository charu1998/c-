#include<stdio.h>
int main()
{
	int a,b,temp=0;
	printf("enter the a,b values");
	scanf("%d %d",&a,&b);
	if(a!=0)
	{
		temp=a;
		a=b;
		b=temp;
	}
	printf("%d %d",a,b);
	return 0;
}
