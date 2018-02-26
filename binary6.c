#include<stdio.h>
int main()
{
	char s[100];
	int i,n,t=0;
	printf("enter the string");
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='0'||s[i]=='1')
		{
			t++;
		}
	}
	if(t==n)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
