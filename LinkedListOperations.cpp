#include<stdio.h>
#include<stdlib.h>
class LinkedList{
	public:
	struct Node{
	int data;
	struct Node *next;
};

struct Node *head=NULL;

void insert(int data)
{
	struct Node *t,*t1;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->data=data;
	t->next=NULL;
	if(head==NULL){
		head=t;
	}
	else{
		t1=head;
		while(t1->next){
			t1=t1->next;
		}
		t1->next=t;
	}
}



void display()
{
	struct Node *t;
	t=head;
	while(t)
	{
		printf("%d->",t->data);
		t=t->next;
	}
	printf("\n");
}

void deletion(int value)
{
	struct Node *curr=head,*prev=NULL;
	int d=1,x=value;
	while(curr)
	{
		if(d==x)
		{
			prev->next=curr->next;
			curr->next=NULL;
			break;
		}
		prev=curr;		
		curr=curr->next;
		d++;
	}
}
};


int main()
{
	LinkedList l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.display();
	l.deletion(2);
	l.display();
	return 0;
}
