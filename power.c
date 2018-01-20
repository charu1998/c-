#include <stdio.h>
int main()
{
	int a,b,c=1;
	printf("enter a,b value");
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		c=c*a;
		b--;
	}
	printf(" the power is %d",c);
	return 0;
}
