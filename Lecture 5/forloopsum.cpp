#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the value of N";
	cin>> n;
	int sum = 0;
	for(int i = 1; i<=n;i++){
		sum  += i;
	}	
	cout<<endl;	
	cout<< sum << endl;
}