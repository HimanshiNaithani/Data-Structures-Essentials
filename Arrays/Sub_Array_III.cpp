#include<iostream>
using namespace std;
int largesum(int arr[],int n)
{
	//Kadane's Algorithm
	int cs=0;
	int maxsum=0;
	for(int i=0;i<n;i++)
	{
		cs+=arr[i];
		if(cs<0)
		{
			cs=0;
		}
		maxsum=max(cs,maxsum);
	}
	return maxsum;
}
int main()
{
	int arr[100]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    
	cout<<largesum(arr,n);
	return 0;
}
