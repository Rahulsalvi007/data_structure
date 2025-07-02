#include<stdio.h>
#include<stdlib.h>

void binary(int a[10],int min,int max ,int data)
{
    int mid;
    mid=(min+max)/2;
    if(min==max && a[min]!=data)
    {
        printf("\n not found");
        return;
    }
    else{
    
    if(a[mid]==data)
    {
        printf("\n %dfound  at %d",data,mid+1);
        return;
    }
     if(data < a[mid])
    {
        binary(a, min, mid-1, data);
    }
    if(data>a[mid])
    {
        binary(a, mid+1, max, data);
    }
}
}

int main()
{
    int a[10], min=0,max=9,data,i;
    printf("\n enter data:");
    for(i=0;i<10;i++){    
    scanf("%d",&a[i]);
    } 

    printf("\n enter search data:");
    scanf("%d",&data);    
    binary(a, min, max, data);

    return 0;
}