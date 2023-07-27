#include<iostream>
using namespace std;

int PrintingSubarrays(int arr[],int n)
{
	for(int i=0;i<n+1;i++)
	{
		for(int j=i;j<n+1;j++)
		{
			for(int k=i;k<j;k++)
			{
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}	
	}
}int main()
{
	int arr[100];
	int n;
	cout<<"Enter value of n:";
	cin>>n;
	cout<<"Enter the numbers:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	PrintingSubarrays(arr,n);
	return 0;
}
