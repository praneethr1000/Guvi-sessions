#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;
class MyString
{
	public:
	void reverse(char a[],char c[])
	{
		int i,x,j=0;
		x=strlen(a);
		for(i=x-1;i>=0;i--)
		{
			c[j]=a[i];
			cout<<c[j];
		}	
		cout<<"\n";
	}
	
	void copy(char a[],char b[])
	{
		int i=0,x;
		x=strlen(a);
		for(i=0;i<x;i++)
		{
			b[i]=a[i];
			cout<<b[i];
		}		
	}
	
};


int main()
{
	MyString obj;
	char a[10]="Program",b[10],c[10];
	obj.reverse(a,c); 
	obj.copy(a,b);
	return 0;
}
