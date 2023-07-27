#include<iostream>
using namespace std;

int largestsum1(int arr[],int n)
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
		    //put a check is subarray > largestsum  
			largestsum=max(largestsum,subarraysum);
		}	
	}
	return largestsum;
}
int largestsum2(int arr[],int n)
{
	int prefix[100]={0};
    prefix[0]=arr[0];
	// Prefix Sum
	for(int i=1;i<n;i++)
	{
		prefix[i]=prefix[i-1]+arr[i];
	}
	//largest sum login
	int largesum=0;
	for(int i=0;i<n+1;i++)
	{
		for(int j=i;j<n+1;j++)
		{
			
			int subarraysum= i>0 ? prefix[j]-prefix[i-1] : prefix[j];
		    //put a check is subarray > largestsum  
			largesum=max(largesum,subarraysum);
		}	
	}
	return largesum;
}
int main()
{
	//Array creation
	int arr[100];
	int n;
	cout<<"Enter value of n:";
	cin>>n;
	cout<<"Enter the numbers:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<largestsum1(arr,n)<<endl;
	cout<<largestsum2(arr,n);
	return 0;
}
