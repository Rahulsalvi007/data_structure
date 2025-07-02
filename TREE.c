#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;//self refincaila code;
    struct node *left,*right;
};

struct node *root=NULL;
void add (void);
// void del(int data);
void inorder(struct node *root);
void preorder(struct node *root);
void postorder(struct node *root);

int main()
{
    int choice, data;
    while(1)
    {
        printf("\n1.insert\n2.delete\n3.inorder\n4.preorder\n5.postorder\n6 exit");
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: add(); break;

            // case 2: printf("\n enter data");
            // scanf("%d",&data);
            // del(data);
            // break;

            case 3: if(root==NULL)
            printf("\n underflow");
            else
            inorder(root);
        break;

            case 4: preorder(root); break;
            case 5: postorder(root); break;
        }
    }
    return 0;
}

void add(void)
{
    struct node *t=root,*ptr=NULL;
    struct node *n=(struct node *)malloc(sizeof(struct node));
    int data ;
    printf("\n enter data");
    scanf("%d",&data);
    n->info=data;
    n->left=NULL;
    n->right=NULL;
    if(root==NULL)
    root=n;
else
{
    while(t!=NULL&&t->info==data)
    {
        ptr=t;
        if(data<t->info)
        t=t->left;
    else
    t=t->right;
        if(t!=NULL)
        {
            printf("\n alrady prevt");
            return;
        }
        if(data<ptr->info)
        ptr->left=n;
    else
    ptr->right=n;
    }
}

}

void inorder(struct node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("\n%d",t->info);
        inorder(t->left);
    }
}
void preorder(struct node *t)
{
    if(t!=NULL)
    {
        printf("%d",t->info);
        preorder(t->left);
        preorder(t->right);
    }
}

void postorder(struct node *t)
{
    if(t!=NULL)

postorder(t->left);
postorder(t->right);
printf("\n %d",t->info);
}
// void del(int data)
// {
//     struct node *t=root,*ptr=NULL,*temp;
//     int save;
//     if(root==NULL)
//     printf("\nunderflow");
// else if(root->info==data)
// {
//     if(root->left==NULL&&root->right!==NULL)
//     {
//         root=root->right;
//         free(t);
//     }
// else if(root->left!==NULL&&root->right==NULL)
//     {
//         root=root->left;
//         free(t);
//     }
// else if(root->left==NULL&&root->right==NULL)
//     {
//         free(t);
//         root=NULL;
//     }
// else if(root->left!=NULL&&root->right!=NULL)
// }

//     else 
//     {
//         while(t!=NULL&&t->info!=data)
//         {
//             ptr=t;
//             if(data<ptr->info)
//             t=t->left;
//         else 
//             t=t->right;
//         }
//         if(t==NULL)
//         {
//             printf("\n not found");
//             return;
//         }

//         if(t->left==NULL&&t->right==NULL)
//         {
//             if(data<ptr->info)
//             ptr->left=NULL;
//             free(t);
//         }
//     else if(t->left==NULL&&t->right==NULL)
//     {
//         if(data<left->info)
//         ptr->left=t->right;
//         else
//         ptr->right=t->left;
//     free(t);
//     }
//     }
// }