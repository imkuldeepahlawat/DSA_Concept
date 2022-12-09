#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,product,sum;
	cout<<"Enter Your Number Here"<<endl;
	cin>>n;
	cout<<"Your Number is :- "<<n;
	product = 1;
	sum = 0;
	while(n!=0){
		int digit = n%10;
		product = product * digit;
		sum = sum + digit;

		n = n/10;
	}
	int answer = product - sum;
	return answer;
	cout<<answer;
	cout<<"KYa Hua";
}