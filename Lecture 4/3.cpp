/*

1 2 3
4 5 6
7 8 9

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int  n,row,col,k;
	cin>>n;
	k = 1;
	row = 1;
	while(row<=n){
		col = 1;
		while(col<=n){
			cout<<k<<" ";
			k = k + 1;
			col= col + 1;
		}
		cout<<endl;
		row= row+ 1;
	}
}