#include<iostream>
using namespace std;

   int mySqrt(int x) {
        long long s=0,e=INT_MAX,ans;
        while(s<=e)
        {
            long long mid=(s+e)/2;
            if(mid*mid<=x)
            {
                ans=mid;
                s=mid+1;

            }
            else {
                e=mid-1;
            }
        }
        return ans;
    }

int main(){
	int x;
	cout<<"Enter the number:";
	cin>>x;
	int sqrt=mySqrt(x);
	cout<<sqrt;
	
}	
 
