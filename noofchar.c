#include<stdio.h>
int main()
{
	char a[100];
	int len,i,word=1;
	printf("\n enter the string");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i==0)
	{
		if(a[i]!='.'&&a[i+1]==' ')
		word=word+1;
	}
	printf("there are %d charecter ",word);
	}
	return 0;
}
