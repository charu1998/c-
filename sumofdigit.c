#include<stdio.h>
int main()
{
	int n,s,a,b,c,d;
	printf("enter the number");
	scanf("%d",&n);
	c=n/100;
	s=n%100;
	a=s/10;
	b=s%10;
	d=a+b+c;
	printf("\n sum is %d",d);
	return 0;
	
}
