#include<iostream>
using namespace std;

int largestsum(int arr[],int n)
{
	int largestsum=0;
	for(int i=0;i<n+1;i++)
	{
		for(int j=i;j<n+1;j++)
		{
			int subarraysum=0;
			for(int k=i;k<j;k++)
			{
				subarraysum+=arr[k];
			}
			largestsum=max(largestsum,subarraysum);
		}	
	}
	return largestsum;
}
int main()
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
	cout<<largestsum(arr,n);
	
	return 0;
}
