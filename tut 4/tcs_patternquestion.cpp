#include<iostream>
using namespace std;

int main(){
	int n, i ,j;
	n = 4;
	//  cin >> n;
	 i = 1;
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
            char p = '*'*j;
            char np = p * j;
	 		cout<<p;
            if(j==1){
                j++;
                continue;
            }
            
	 		j = j + 1;
	 	}
	 	cout<<endl;
	 	i = i+ 1;
	 }
}