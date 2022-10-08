#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of N";
	cin>> n;
	cout<<endl;
	int a= 0;
	int b = 1;
	cout<<a <<" "<<b<<" ";
	for(int i = 1;i<=n;i++){
		int nextnumber = a+b;
		cout<<nextnumber<<" ";
		a = b;
		b = nextnumber;
	}
	
}