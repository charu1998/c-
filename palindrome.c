#include <stdio.h>
int main()
{
	int n,d,t,res=0;
	printf("n value:\n");
	scanf("%d",&n);
	n=t;
	while(n!=0)
	{
		d=n%10;
		res=(res*10)+d;
		n=n/10;
		}
		if(t==res)
		{
			printf("palindrome");
		}
		else
		{
			printf("NO");
		}
		return 0;
}
