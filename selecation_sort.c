#include<stdio.h>
int main()
{
    int a[20],i,j,n,temp,small;

    printf("\n neter size of array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\n Enter element in arry:");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        small=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[small])
            small=j;

        }
        if(i!=small)
        {
            temp=a[small]; 
            a[small]=a[i];
            a[i]=temp;
        }
    }
    printf("\n array in ascending order:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}