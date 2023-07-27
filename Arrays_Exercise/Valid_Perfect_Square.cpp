#include<iostream>
using namespace std;

bool ValidPerfectSquare(int num){

int s=0;
int e=num;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(mid*mid==num)
		{
			return true;
		}
		else if(mid*mid>num)
		{
			e=mid-1;
		}
		else{
			s=mid+1;
		}
   }
   return false;
}
int main()
{
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
	bool ans=ValidPerfectSquare(n);
	if(ans!=false){
		cout<<"It is Valid Perfect Square..";
	}
	else{
		cout<<"It is not a Valid Perfect Square..";
	}
	
    
	
}
