#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *left,*right;
};
struct node *root=NULL;
void add (void);
void del (int data);
void inorder (struct node *root);
void preorder (struct node *root);
void postorder (struct node *root);
int  main()
{
int choice,data;
while(1)
{ 
 	printf("\n1.Insert");
	printf("\n2.Delete");
	printf("\n3.Inorder");
	printf("\n4.Preorder");
	printf("\n5.postorder");
	printf("\n6.Exit");
	printf("\nEnter Your Choice=");
	scanf("%d",&choice);
switch(choice)
{
case 1: add();
break;
case 2:	 	printf("\nEnter Data:");
	scanf("%d",&data);
	del(data);
break;
case 3: if(root==NULL)
		printf("\nUnderflow");
	else
		inorder(root);
break;
case 4: preorder(root);
break;
case 5: postorder(root);
break;
case 6: exit(0);
default :
printf("Invlid");
}
}
}

void add (void)
{
struct node *t=root,*ptr=NULL;
struct node *n= (struct node*)malloc(sizeof(struct node));
int data;
		printf("\nEnter data=");
		scanf("%d",&data);
		n->info=data;
		n->left=NULL;
		n->right=NULL;
	if(root==NULL)
		root=n;
	else
	{
	while(t!=NULL && t->info!=data)
	{
		ptr=t;
	if(data < t->info)
		t=t->left;
	else
		t=t->right;
	}
	if(t!=NULL)
	{
		printf("\nAlready Present");
		return;
	}
	if(data<ptr->info)
		ptr->left=n;
	else
		ptr->right=n;
	}
	}
	void del(int data)
	{
	struct node *t=root,*ptr=NULL,*temp;
	int save;
	if(root==NULL)
		printf("\nUnderflow");
	else if(root->info==data)
	{

	if(root->left==NULL && root->right!=NULL)
	{
		root=root->right;
		free(t);
	}
	else if(root->left!=NULL && root->right==NULL)
	{
		root=root->left;
		free(t);
	}
	else if(root->left==NULL && root->right==NULL)
	{
		free(t);
		root=NULL;
	}
	else if(root->left!=NULL && root->right!=NULL)
	{
	}
	}
	else
	{
	while(t!=NULL && t->info!=data)
	{
		ptr=t;
	if(data<ptr->info)
		t=t->left;
	else
		t=t->right;
	}
	if(t==NULL)
	{
		printf("\nNOT FOUND");
	return;
	}
	if(t->left==NULL && t->right==NULL)
	{
	if(data<ptr->info)
		ptr->left=NULL;
		free(t);
	}
	else if(t->left==NULL && t->right==NULL)
	{
	if(data<ptr->info)
		ptr->left=t->right;
	else
		ptr->right=t->right;
		free(t);
	}
	}
	}
	void inorder(struct node *t)
	{
	if(t!=NULL)
	{
		inorder(t->left);
		printf(" %d",t->info);
		inorder(t->right);
	}
	}
	void preorder(struct node *t)
	{
	if(t!=NULL)
	{
		printf(" %d",t->info);
		preorder(t->left);
		preorder(t->right);
	}
	}
	void postorder(struct node *t)
	{
	if(t!=NULL)
	{
		postorder(t->left);
		postorder(t->right);
		printf(" %d",t->info);
	}
	}