#include<stdio.h>
int main()
{
    int a[]={1,4,2,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Display the given unsorted data:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("hellow");

    return 0;

}