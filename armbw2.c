#include<stdio.h>
int main()
{
	int f,l,i,n,d,res=0,t;
	printf("enter f,l value");
	scanf("%d %d\n",&f,&l);
	printf("enter n value");
	scanf("%d",&n);
	n=t;
	for(i=f;i<=l;i++)
	{
	while(n!=0)
	{
		d=n%10;
		res=res+(d*d*d);
		n=n/10;
	}
	if(t==res)
	{
		printf("%d is armstrong",t);
	}
	else
	{
		printf("no");
	}
	}
}
	
