#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class Stack{
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
		cout<<t->data<<"->";
		t=t->next;
	}	
	cout<<"\n";
}
};


int main()
{
	Stack o;
	o.insert(1);
	o.insert(2);
	o.insert(3);
	o.display();
	return 0;
}
