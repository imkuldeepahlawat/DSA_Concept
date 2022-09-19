// homework
/*
      1
    2 3
  4 5 6
7 8 9 10
*/
#include<iostream>
using namespace std;

int main(){
	int n, i ,j;
	n = 4;
	//  cin >> n;
	 i = 1;
   int value = 1;
	 while(i<=n){
	 	// space  print
	 	int space = n - i + 1;
	 	while(space){
	 		cout<<" ";
	 		space = space - 1;
	 	}
	 	// star print
	 	j = 1;
	 	while(j<=i){
	 		cout<<value;
         value++;
	 		j = j + 1;
	 	}
	 	cout<<endl;
	 	i = i+ 1;
	 }
}