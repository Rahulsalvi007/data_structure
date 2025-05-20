#include<stdio.h>
#include<stdlib.h>//<alloc.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL;
//function decleration/prototype
void add_front(void);
void add_last(void);
void del_front(void);
void del_last(void);
void traverse(void);

int main()
{
    int choice;
    while(1)
    {
        printf("\n1.ADDF_FONT\n2.ADD_LAST\n3.DEL_FRONT\n4.DEL_LAST\n5.TRAVERSE");
        printf("\n\tENTER YOUT CHOICE");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: add_front(); break;
            case 2: add_last(); break;
            case 3: del_front();break;
            case 4: del_last(); break;
            case 6: exit(0);
        }
    }
    return 0;
}
void add_front(void)
{
    struct node *n=(struct node * )malloc(sizeof(struct node));
    printf("\nENTER DATA");
    scanf("%d",&n->info);
    n->next=start;
    
}

void add_last(void)
{

}

void del_front(void)
{

}

void del_last(void)
{

}

void traverse(void)
{

}