#include<iostream>
using namespace std;

bool sortedArray(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]>arr[i])
		{ 
		    return false;
		}
	}
	return true;
}
int main()
{
	int arr[100];
	int n;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter the numbers:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<sortedArray(arr,n);
}
