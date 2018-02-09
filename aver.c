#include<stdio.h>
double findmedian(int a[],int n)
{
	sort(a,a+n);
	if(n%2!=0)
	return(double)a[n/2];
	return(double)(a[(n-1)/2]+a[n/2])/2.0;
	}
	int main()
	{
		int a[]={1,2,3,4,5};
		int n=sizeof(a)/sizeof(a[0]);
		printf("average is %d",findmedian(a,n));
		return 0;
	}
