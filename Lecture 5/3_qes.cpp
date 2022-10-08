#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	a = 1;
	b = 2;
	if(a-- > 0 || ++b > 2){
		cout<<"Stage1 - Inside if";
	} else{
		cout << "Stage2 - Inside else";
	}
	cout<<endl;
	cout << a << " " << b << endl;
	/*
output--
Stage1 - Inside if
0 2
	*/
	
}