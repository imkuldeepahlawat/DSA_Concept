// homework
/*
****
 ***
  **
   *
*/
// space = i - 1
// star  = n - i + 1
#include<iostream>
using namespace std;

int main(){
    int n, i ,j;
    n = 4;
    //  cin >> n;
     i = 1;
     while(i<=n){
        // space  print
        int space = i - 1;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        // star print
        j = 1;
        while(j<=n-i+1){
            // int star = n - i + 1;
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;
        i = i+ 1;
     }
}