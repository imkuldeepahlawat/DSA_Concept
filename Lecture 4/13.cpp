// homework
// n - i + 1
/*
****
*** 
**  
*   
 */
#include<iostream>
using namespace std;

int main(){
	int n, i ,j;
	n = 4;
	//  cin >> n;
	 i = 1;
	 while(i<=n){
		j = 1;
	 	// star  print
	 	int star;
	 	while(j<=n-i+1){
			cout<<"*";
			j = j + 1;
		}
	 	cout<<endl;
	 	i = i+ 1;
	 }
}