#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
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


void makeCircular()
{
	struct Node *t=head;
	while(t->next)
	{
		t=t->next;
	}
	t->next=head;
	cout<<"operation performed";
}

void checkCircular()
{
	struct Node *t1;
	int x;
	x=head->data;
	t1=head;
	while(t1)
	{
		t1=t1->next;
		if(t1->data==x){
			cout<<"Circular"<<endl;
			break;
		}
		
		
	}
	
}

};


int main()
{
	int y;
	LinkedList l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
	l.display();
	l.makeCircular();
	l.checkCircular();
	return 0;
}
