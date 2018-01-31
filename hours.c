#include<stdio.h>
int main()
{
	int h1,h2,m1,m2,s,l;
	printf("enter 2 hors");
	scanf("%d:%d",&h1,&m1);
	printf("enter 2 mins");
	scanf("%d:%d",&h2,&m2);
	if(h1>h2)
	{
		s=h1-h2;
		l=m1-m2;
		printf("the subraction is %d:%d",s,l);
	}
	return 0;
}
