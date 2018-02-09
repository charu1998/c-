#include<stdio.h>
int main()
{
	int a[10];
	int i,j,m,n,temp;
	printf("enter the array");
	for(i=1;i<=5;i++)
	
		{
			scanf("%d",&a[i]);
		}
	
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		}
		m=a[n/2];
		printf("madient element is %d",m);
		return 0;
}
