#include<stdio.h>
int main()
{
	char a[100];
	int len,i,word=0;
	printf("\n enter the string");
	scanf("%[\n]d",&word);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if((a[i]>=0)&&(a[i]<=9))
		{
			word=word+1;
		}
	
			}
			printf("there are %d numbers in the line",word);
			return 0;
}
