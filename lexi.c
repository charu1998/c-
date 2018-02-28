#include<stdio.h>
int main()
{
    int a[]={3,2,1,5,4};
    int i,j,temp;
    
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
                
    }
    for(i=0;i<5;i++)
    {
    printf("%d\t",a[i]);
    }   
    return 0;
}
