#include<stdio.h>
int main()
{
    char a[100];
    int i,count=0;
    printf("enter the string");
    scanf("%[^\n]s",&a[i]);
    for(i=0;a[i]!='\0';i++)
    {
        if(!((a[i]>=0&&a[i]<=9)||(a[i]>='a'&&a[i]<='z')))
        {
            count=count+1;
        }
    }
    printf("special characters are %d",count);
    return 0;
}
