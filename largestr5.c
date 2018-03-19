#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,count=0;
    printf("Enter the 1st string");
    scanf("%s",&a[i]);
    printf("Enter the 2nd string");
    scanf("%s",&b[i]);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            count=1;
        }
    }
    if(count==1)
    {
        printf("%s",a);
    }
    else
    {
        if(a[i]>b[i])
        {
            printf("%s",a);
        }
        else
        {
            printf("%s",b);
        }
    }
    return 0;
}
