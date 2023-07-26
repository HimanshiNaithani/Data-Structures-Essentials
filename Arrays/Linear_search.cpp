#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
		
	return -1;
}
int main()
{
	int arr[5];
	int n;
 n=sizeof(arr)/sizeof(int);
	cout<<n<<endl;
	cout<<"Enter the numbers:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key you want to search"<<endl;
	int key;
	cin>>key;
	
	int index=linear_search(arr,n,key);
	if(index!=-1)
	 {
	 	cout<<key<<" Is present at index  "<<index<<endl;
	 }
	 else
	 {
	 	cout<<key<<" is NOT found"<<endl;
	 }
	
}
