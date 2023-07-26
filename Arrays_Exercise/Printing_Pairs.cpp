#include<iostream>
using namespace std;

void printingPairs(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int x=arr[i];
		for(int j=0;j<n;j++)
	    {
		   int y=arr[j];
		   
		   cout<<x<<","<<y<<endl;
	    }
	    cout<<endl;
	}	 
}
int main()
{
	int arr[50];
	int n;
	cout<<"Enter the size:";
	cin>>n;
	cout<<"Enter the number:"<<endl;
    for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	printingPairs(arr,n);
	return 0;
}
