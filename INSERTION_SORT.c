#include<stdio.h>
 int main()
 {
    int a[20],i,j,temp,n;

    printf("\n enter size of array");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("\n Enter element in array:");
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];

        for(j=i-1;j>=0 && temp<=a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    printf("\n array in ascendin order:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
 }