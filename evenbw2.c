#include <stdio.h>
int main()
{
	int f,l,i;
	printf("enter f,l",f,l);
	scanf("%d %d",&f,&l);
	for(i=f;i<=l;i++)
	{
		if(i%2==0)
		{
			printf("%d is even\n",i);
		}
	}
}
