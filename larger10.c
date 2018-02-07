#include<stdio.h>
int main()
{
	int a[]={2,1,4,3,6,5,8,7,9};
	int max,i;
	max=a[0];
	for(i=1;i<=10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("the largest no is %d",max);
	return 0;
}
