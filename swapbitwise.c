#include<stdio.h>
int main()
{
	int i=65;
	int k=120;
	printf("before swapping %d %d",i,k);
	i=i^k;
	k=i^k;
	i=i^k;
	printf("swapped values are %d %d",i,k);
	return 0;
}
