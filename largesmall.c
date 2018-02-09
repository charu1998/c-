#include<stdio.h>
int main()
{
	int a[3],i,j,n,temp;
	printf("enter the size");
	scanf("%d\n",&n);
	printf("enter the array\n",i+1);
	for(i=0;i<n;i++)
	{
		
		
			scanf("%d ",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d %d",a[0],a[n-1]);
	return 0;
}
