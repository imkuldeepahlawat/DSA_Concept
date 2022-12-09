/*

1234
1234
1234
1234

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int  n,row,col,k;
	cin>>n;
	row = 1;
	while(row<=n){
		col = 1;
		while(col<=n){
			cout<<col;
			col = col + 1;
		}
		cout<<endl;
		row = row + 1;
	}
}