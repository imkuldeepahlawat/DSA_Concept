/*

1
22
333
4444

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,row, col;
	// cin>>n;
	n = 4;
	row = 1;
	while(row<=n){
		col= 1;
		while(col<=row){
		cout<<row;
		col = col + 1;			
		}
		cout<<endl;
		row = row + 1;
	}
}