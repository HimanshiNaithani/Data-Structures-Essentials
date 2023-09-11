#include<iostream>
#include<stack>
using namespace std;

	
class TwoStack{
	//properties
	public:
	int *arr;
	int top1;
	int top2;
	int size;
	
	//behaviour
	TwoStack(int s)
	{
		this->size=s;
		arr=new int[s];
		top1=-1;
		top2=s;
	}
//behaviour
	Stack(int s)
	{
		this->size=s;
		arr=new int[s];
		top1=-1;
		top2=s;
	}
    void push1(int element)
    {
    	if(top2-top1>1)
    	{
    		top1++;
    		arr[top1]=element;
		}
	}
	void push2(int element)
    {
    	if(top2-top1>1)
    	{
    		top2--;
    		arr[top2]=element;
		}
	}
	int pop1()
	{
		int ans;
		if(top1>=0)
		{
			int ans=arr[top1];
			top1--;
			return ans;
		}
		else{
			 return -1;
		}
	}
	int pop2()
	{
		int ans;
		if(top2<size)
		{
			int ans=arr[top2];
			top2--;
			return ans;
		}
		else{
			cout<<"Stack Underflow"<<endl;
		}
	}
};
int main()
{
	TwoStack st(5);
	
	st.push1(22);
//	st.push2(43);
//	st.push1(44);
//	st.push2(5);
//	st.push1(8);
	
//	cout<<st.peek()<<endl;
////	st.pop();
//    cout<<st.peek()<<endl;
////    st.pop();
//    cout<<st.peek()<<endl;
////    st.pop();
//    cout<<st.peek()<<endl;
//    
//    if(st.isempty())
//    {
//    	cout<<"Stack is Empty..."<<endl;
//	}
//	else{
//		cout<<"Stack is not Empty.."<<endl;
//	}
	return 0;	
}
