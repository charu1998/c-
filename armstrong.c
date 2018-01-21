#include<stdio.h>
int main()
{
	int n,d,res=0,t;
	printf("enter n value");
	scanf("%d",&n);
	n=t;
	while(n!=0)
	{
		d=n%10;
		res=res+(d*d*d);
		n=n/10;
	}
	if(t==res)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	}
