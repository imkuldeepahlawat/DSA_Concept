
/* 
1234554321
1234**4321
123****321
12******21
1********1

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k,n;
	n = 5;
	i = 1;
	// printing (1st) square
	while(i<=n){
		j = 1;
		while(j<=n-i+1){
			cout<<j;
			j = j + 1;
		}
		// printing (2nd triangle)
		int start = i - 1;
      	while(start){
      		// char value = '*';
         	cout<<("**");
         	start = start - 1;
      	}
		// printing (3rd triangle)
		int min = n- i + 1;
      while(min){
         cout<<min;
         min = min - 1;
      }
		cout<<endl;
		i = i + 1;
	}
}