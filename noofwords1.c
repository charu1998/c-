#include<stdio.h>
int main()
{
	char a[100];
	int count=0,i,len;
		printf("enter the sentence");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		
	if(a[i]==' ')
	{
		count ++;
	}
	}
	printf("no of words are %d",count);
}
