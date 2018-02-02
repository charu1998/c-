#include<stdio.h>
int main()
{
	int m,h,n;
	printf("enter the minutes");
	scanf("%d",&n);
	if(n>60)
	{
		h=n/60;
		m=n%60;
		printf("%d:%d",h,m);
	}
	else
	{
		printf("0:%d");
	
	printf("%d:%d");
}
return 0;
}
