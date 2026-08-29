#include<stdio.h>
#include "global.c"//user defined file
#define max 5
int main()
{
    // int a[]={1,2,9,3};
    int a[5];
    // int n=sizeof(a)/sizeof(int);
    printf("Enter the 5 elements\n");
    int n=5;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        // int mid=i;
        for(int j=i+1;j<n;j++)
        {
          if(a[j]<a[i])
          {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("Sum:%d",sum(5,6));
    return 0;
}