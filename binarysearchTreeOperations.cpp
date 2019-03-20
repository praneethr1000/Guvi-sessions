#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *left,*right;
};

struct Node *create(int x)
{
	struct Node *t1=(struct Node *)malloc(sizeof(struct Node));
	t1->data=x;
	t1->left=NULL;
	t1->right=NULL;
	return t1;
}

struct Node *insert(struct Node *t,int x)
{
	if (t==NULL)
		return create(x);
	
	if(x<t->data)
		t->left=insert(t->left,x);
	else if(x>t->data)
		t->right=insert(t->right,x);
	return t;	
}

int Depth(struct Node *root)
{
	int leftDepth,rightDepth;
	if(root==NULL)
		return 0;
	else
	{
		leftDepth=Depth(root->left);
		rightDepth=Depth(root->right);
		if(leftDepth>rightDepth)
			return leftDepth+1;
		else
			return rightDepth+1;
	}
	
}

void display(struct Node *t)
{
	if(t!=NULL)
	{
		display(t->left);
		printf("%d \n",t->data);
		display(t->right);
	}
}

int main()
{
	struct Node *root=NULL;
	int z;
	root=insert(root,8);
	insert(root,3);
	insert(root,1);
	insert(root,6);
	insert(root,7);
	insert(root,10);
	insert(root,14);
	insert(root,4);
	display(root);
	z=Depth(root);
	printf("\n Height of root is %d:",z);
}
