#include<stdio.h>
int main()
{
	int a[10],i,j;
	printf("enter the array");
	for(i=1;i<=3;i++)
	{
		
			scanf("%d",&a[i]);
		
	}
	for(i=1;i<=3;i++)
	{
	 printf("%d %d\n",a[i],i);
	}
	return 0;
}
