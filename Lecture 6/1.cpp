//DecimalToBinary
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>> n;
	long long int b = n;
	long long int ans = 0, i = 1;
	while(n!=0){
		long long int rem = n%2;
		ans = ans + (rem*i);
		n = n / 2;
		i *= 10;
	}
	cout<<"Binary Number of "<<b<<" is "<<ans;
}