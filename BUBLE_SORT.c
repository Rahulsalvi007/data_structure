#include<stdio.h> // buble sort
int main()
{
    int a[20],i,j,temp,n;

    printf("\n enter array size");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    printf("\n Enter element :");
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("\n assending arder:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
return 0;    
}