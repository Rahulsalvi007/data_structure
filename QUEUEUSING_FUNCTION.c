#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max],front=0,rear=-1;
void enqueue(void);
void dequeue(void);
void peek(void);
void traverse(void);

int main()
{
    int choice;
    while(1)
    {
        printf("\n1.enqueue\n2.dequeue\n3.peek\n4.traverse");
        printf("\nenter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: traverse(); break;
        }
    }
    return 0;
}
void enqueue(void)
{
    if(rear==max-1)
    printf("\n overflow");
    else
    {
        rear++;
        printf("\n enter element");
        scanf("%d",&a[rear]);

    }
}

void dequeue(void)
{
    if(front>rear)
    printf("\n underflow");
    else
    {
        printf("\nm dequeue=%d",a[front]);
        front++;

    }
}

void peek(void)
{
    if(front>rear)
    printf("\n underflow");
    else
    printf("\n peeked=%d",a[front]);
}

void traverse(void)
{
    int i;
    if(front>rear)
    printf("\n underflow");

    else
    {
        for(i=front;i<=rear;i++)
        printf("%d\t",a[i]);
    }
}