// total number of setbits in a&b
// integer n
#include <bits/stdc++.h>
using namespace std;

int bitS(){
	int n;
	int c = 0;
	int a, b;
	cout<<"Enter your 1st value here"<<endl;
	cin>>a;
	cout<<"Enter your 2nd value here"<<endl;
	cin>>b;
	n= a + b;;
	while(n!=0){
		if(n&1==1){
			c+=1;		
		}
		n= n>>1;
	}
	
		return c;
	}
	int main(){
		cout<<"The total number of 1 bits are:- "<<bitS()<<endl;
	}