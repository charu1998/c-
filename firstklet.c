#include<stdio.h>
int main()
{
	int k,i;
	char s[100];
	printf("enter the strimg");
	scanf("%s",&s);
	printf("enter the k value");
	scanf("%d\n",&k);
	for(i=0;i<k;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
