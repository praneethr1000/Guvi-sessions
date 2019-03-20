#include<stdio.h>
#include<iostream>
using namespace std;
class MergeSort{
	public:
		
		
	void merge(int arr[],int start,int mid,int end)
	{
		int temp[end-start+1];
		int i=start,j=mid+1,k=0;
		
		while(i<=mid && j<=end)
		{
			if(arr[i]<arr[j])
			{
				temp[k]=arr[i];
				k++;
				i++;
			}
			else
			{
				temp[k]=arr[j];
				k++;
				j++;
			}
		}
		
		while(i<=mid)
		{
			temp[k]=arr[i];
			k++;
			i++;
		}
		
		while(j<=end)
		{
			temp[k]=arr[j];
			k++;
			j++;
		}
		
		for(i=start;i<=end;i++)
		{
			arr[i]=temp[i-start];
		}
		
	}
		
	void sorting(int arr[],int start,int end)
	{
		int mid;
		mid=(start+end)/2;
		if(start<end)
		{
			sorting(arr,start,mid);
			sorting(arr,mid+1,end);
			merge(arr,start,mid,end);
		}
	}
	
};

int main()
{
	MergeSort m;
	int n,arr[10],i;
	cout<<"Enter no of elements:";
	cin>>n;
	cout<<"Enter the numbers:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	m.sorting(arr,0,n-1);
	for(i=0;i<n;i++)
	cout<<arr[i];
	
}
