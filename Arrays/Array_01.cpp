#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int marks[100]; //Creating an araay of size 100
	marks[0]=-1;    //Assign a value
	 
	int n;
	cout<<"Enter the number of students:";
	cin>>n;
	
	for(int i=0;i<n;i++){  //Input
	cin>>marks[i];
	
	marks[i]=marks[i]*2;  } //Update
	
	for(int i=0;i<n;i++)   //Output
	cout<<marks[i]<<" ,";
	 

	return 0;
}
