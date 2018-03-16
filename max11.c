#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int i,m;
    m=arr[0];
    for(i=1;i<=10;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    printf("Largest number is %d",m);
    return 0;
}
