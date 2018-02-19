#include<stdio.h>
int largest(int arr[0],int n)
{
	int i;
	int max=arr[0];
	for(i=1;i<=n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		return max;
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof (arr)/sizeof(arr[0]);
	printf("largest number is %d",(arr,n));
	return 0;
}
