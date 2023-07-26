#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){

int s=0;
int e=n-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		
	}
	return -1;
}
int main()

{
	int arr[50];
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
	cout<<"Enter the numbers:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key you want to search:"<<endl;
	int key;
	cin>>key;
	
	int index=binarySearch(arr,n,key);
	if(index!=-1)
	 {
	 	cout<<key<<" Is present at index  "<<index<<endl;
	 }
	 else
	 {
	 	cout<<key<<" is NOT found"<<endl;
	 }
	
}
