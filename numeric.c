#include<stdio.h>
int main()
{
	char n;
	printf("enter the string");
	scanf("%c",&n);
	if((65<=n>=90)||(97<=n>=122))
	{
		printf("no");
		
	}
	else
	{
		printf("yes");
	}
	return 0;
}
