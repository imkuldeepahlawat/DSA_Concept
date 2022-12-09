#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n = 6;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout<<endl;
    int k  =2;
    for(int i = 0;i<n;i++){
        cout<<v[i]<<", ";
    }
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = v[i];
    }
    v = temp;
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<v[i]<<", ";
    }
}