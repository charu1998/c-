#include<stdio.h>
int main()
{
	int number[10],i,j,temp;
	printf("enter number",i+1);
	for(i=0;i<10;i++)
		{
		
		scanf("%d",&number[i]);
	}
	for(i=0;i<15;i++);
	{
		for(j=i+1;j<15;j++)
		{
			if(number[i]>number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}
	printf("sorted array is");
	for(i=0;i<15;i++)
	{
		printf("%d",number[i]);
	}
	return 0;
	
	}
