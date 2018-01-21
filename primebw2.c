#include <stdio.h>
int main()
{
	int f,l,n,i,count=0;
	printf("enter the value of f,l");
	scanf("%d %d\n",&f,&l);
	printf("enter n value",n);
	scanf("%d",&n);
 
	for(i=f;i<=l;i++)
	{
		for(i=1;i<=n;i++)
		{
	if(n%i==0)
		{
			count++;
		}
	}
	}
	if(count==2)
	{
		printf("prime");
	}
 
 
return 0;
}
