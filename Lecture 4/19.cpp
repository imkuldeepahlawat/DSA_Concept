/*
   1   
  121  
 12321  
1234321

*/
// space = n - i
// print j
// i - 1
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n, i ,j;
   // n = 4;
    cin >> n;
    i = 1;
    while(i<=n){
      // print karo space
      int space = n - i;
      while(space){
         cout<<" ";
         space = space - 1;
      }
      // print 1st triangle
      j = 1;
      while(j<=i){
         cout<<j;
         j = j + 1;
      }
      // print second triangle
      int start = i - 1;
      while(start){
         cout<<start;
         start = start - 1;
      }
      cout<<endl;
      i = i + 1;
      }
}