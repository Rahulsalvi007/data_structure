#include<stdio.h>
#define MAX 5
int n[MAX],top=-1;

void push(void);
void pop( void);
void peek(void);
void traverse(void);

int main()
{
    int ch;
    while(1)
    {
        printf("\n1.PUSH element:\n2.POP element:\n3.PEEK element:\n4.TRAVERSE:");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek();break;
            case 4: traverse();break;
        }
    }
    return 0;
}
void push(void)
{
    if(top==MAX-1)
    printf("\n OVERFLOW");
    else
    {
    top++;
    printf("\n enter element");
    scanf("%d",&n[top]);
    }
}
 void pop(void)
 {
    if(top==-1)
    printf("\nUNDERFLOW");
    else
    {
        printf("\n delete element=%d",n[top]);
        top--;
    }
 }

 void peek(void)
 {
    if(top==-1)
    printf("\nUNDERFLOW");
    else
    printf("\nPEEK ELEMENT=%d",n[top]);
 }
 void traverse(void)
 {
    int i;
    if(top==-1)
    printf("\nUNDERFLOW");
    else
    {
        printf("\n TRAVERSE :");
        for(i=top;i>=0;i--)
        printf("\t%d",n[i]);
    }
 }