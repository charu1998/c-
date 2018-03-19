#include<stdio.h>
int main()
{
    char a[100];
    int i,count=0,count1=0;
    printf("enter the string");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
        {
           count++;
        }
        else if(a[i]>='0'&&a[i]<='9')
        {
            count1++;
        }
        else
        {
            count=0;
        
        }
        
    }
    if(count>0&&count1>0)
    {
     printf("Yes");   
    }
    else
    {
        printf("No");
    }
    return 0;
}
