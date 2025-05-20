#include<stdio.h>
#include<stdlib.h>
#define max 5

int n[max],rear=-1,front=-1;
void enqueue(void);
void dequeue(void);
void peek(void);
void traverse(void);

int main()
{
    while(1)
    {
        int ch;
        printf("\n1.ENQUEUE");
        printf("\n2.DEQUEUE");
        printf("\n3.PEEK");
        printf("\n4.TRAVERSE");
        printf("\n5.EXIT");
        printf("\t.ENTER YOUR CHOICE:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: traverse(); break;
            case 5: exit(0); break;
        }
    }
    return 0;
}

void enqueue(void)
{
    if((front==0 && rear==max-1)||(front==rear+1))
    printf("\n OVERFLOW");

    else
      { 
        if(rear==-1)
        {
            rear=0;
            front=0;
        }
        else if(rear==max-1)
        rear=0;
    else
        rear++;

            printf("\n ENTER ELEMENT:");
            scanf("%d",&n[rear]);
    }
}
void dequeue(void)
{
    if(front==-1)
    printf("\n UNDERFLOW");
    else
    {
        printf("DEQUED=%d",n[front]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
    else if(front==max-1)
    front=0;
    else
        front++;
    }
}
void peek(void)
{
    if(front==-1)
    printf("\n UNDEFLOW");
    else
        printf("\nPEEKED=%d",n[front]);
}
void traverse(void)
{
    int i;
    if(front==-1)
    printf("\n UNDERFLOW");
    else
    {
        if(front<=rear)
        {
            for(i=front;i<=rear;i++)
            printf("\t%d",n[i]);
        }
        else
        {
            for(i=front;i<=max-1;i++)
            printf("\t%d",n[i]);
            
            for(i=0;i<=rear;i++)
            printf("\t%d",n[i]);
        }
    }
}