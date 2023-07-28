#include<iostream>
using namespace std;

int secondLargest(int a[],int n)
{
	int largest=a[0];
	int slargest=-1;
	
	for(int i=1;i<n;i++)
	{
		if(a[i]>largest)
		{
			slargest=largest;
			largest=a[i];
		}
		else if(a[i]<largest && a[i]>slargest)
		{
			slargest=a[i];
		}
	}
	return slargest;
}
int secondsmallest(int a[],int n)
{
	int smallest=a[0];
	int ssmallest=INT_MAX;
	
	for(int i=1;i<n;i++)
	{
		if(a[i]<smallest)
		{
			ssmallest=smallest;
			smallest=a[i];
		}
		else if(a[i] > smallest && a[i]<ssmallest)
		{
			ssmallest=a[i];
		}
	}
	return ssmallest;
}
int main()
{
	int a[100];
	int n;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter the numbers:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Second Smallest:"<<secondsmallest(a,n)<<endl;
	cout<<"Second largest"<<secondLargest(a,n);
	
	return 0;
}
