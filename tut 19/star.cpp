#include<iostream>
using namespace std;
int main()
{
int n = 25, s, i, j;
cout << "Enter number of rows: ";
// cin >> n;
cout<<endl;
for(i = 1; i <= n; i++){
    //for loop to put space
    for(s = i; s < n; s++){
        cout << " ";
    }
    //for loop for displaying star
    for(j = 1; j <= i; j++){
        if(j==1){
            cout << "*";
        }
        else{
            cout << "**";
        }
    }
    // ending line after each row
    cout << "\n";
}
return 0;
}