#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    // it is a dynamic array
    vector<int> v;
    // everytime it need to add space it will not add space it would double itself
    v.capacity();
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<"Vector "<<i<<" is "<<v[i];
        cout<<endl;
    }
    
}