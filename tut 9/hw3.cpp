// taking multiple input in array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numbers[5];
    cout<<"Enter 5 numbers" <<endl;
    // store input in array
    for(int i = 0; i<5; ++i){
        cin>>numbers[i];
    }
    cout<< "The numbers Are;- "<<endl;
    // printing an array
    for(int n = 0; n<5; ++n){
        cout<<numbers[n]<<endl;
    }
    return 0;
}