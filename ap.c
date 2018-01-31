#include<stdio.h>
int main()
{
	int n,a=1,d,sum=0,i;
	printf("Enter N  D values");
	scanf("%d %d ",&n,&d);
	for(i=1;i<=n;i++)
	{
		sum=sum+a;
		a=a+d;
	}
	
	printf("\n%d",sum);
	return 0;
}
