#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER THE NUMBER\n");
	scanf("%d",&a);
	b=a-1;
	if(b%2==0)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",a);
	}
	return 0;
}
