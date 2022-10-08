#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	int d = n;
	long long int i = 1, ans = 0;
	if(n <= 0){
		n = n * -1;
	} 
	int b = n;
	while(n!=0){
		long long int rem = n%2;
		ans = ans + (rem*i);
		n = n / 2;
		i *= 10;
	}
	cout<<"Binary Number of "<<b<<" is "<<ans;
	ans = ~ans;
	cout<<ans<<endl;
	
}