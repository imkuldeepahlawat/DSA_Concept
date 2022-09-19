/*

a b c d
b c d e
c d e f

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    i= 1;
    char value = 'A';
	while(i<=n){
		j = 1;
		while(j<=n){
			char value = ('A' + i + j- 2);
			cout<<value<<" ";
			// value = value + 1;
			j = j + 1;
		}
		cout<<endl;
		i = i + 1;
	}
}