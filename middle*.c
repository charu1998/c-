#include<stdio.h>
int main()
{
    char a[50];
    int i,l,n;
    printf("enter the string:");
    scanf("%s",&a);
    l=strlen(a);
    n='*';
    a[l/2]=n;
    if(l%2==0)
    {
        a[(l-1)/2]==n;
    }
    printf("%s",a);
    return 0;
}
