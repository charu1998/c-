#include<stdio.h>
int main()
{
	int n,d,t,rev=1;
	printf("enter the no");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		rev=(rev*10)+d;
		n=n/10;
	}
	while(rev!=1)
		{
			t=rev%10;
			printf("%d\t",t);
			rev=rev/10;
		}
		return 0;
}
