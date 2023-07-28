#include<iostream>
using namespace std;

    int findMaxConsecutiveOnes(int nums[],int n) {

        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
                maxi=max(maxi,count);
            }
            else
            {
                count=0;
            }
        }
        return maxi;
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
	cout<<"Max consecutive Ones are: "<<findMaxConsecutiveOnes(arr,n);
	 
	return 0;
}
