#include <stdio.h>
int main()
{
	int f,l,i;
	printf("enter f,l",f,l);
	scanf("%d %d",&f,&l);
	for(i=f;i<=l;i++)
	{
		if(i%2==1)
		{
			printf("%d is odd\n",i);
		}
	}
}
