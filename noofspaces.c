#include<stdio.h>
int main()
{
	char a[100];
	int len,i,word=0;
	printf("\n enter the string");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			word=word+1;
		}
	
			}
			printf("there are %d spaces in the line",word);
			return 0;
}
