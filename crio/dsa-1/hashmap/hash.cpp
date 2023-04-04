#include<bits/stdc++.h>
using namespace std;
int main(){
    // creation
    unordered_map<string,int> m;

    // insertion
    pair<string,int> p= make_pair("hello",3);
    // 1
    pair<string,int> p1("hello",3);
    // 2
    m["kuldeep"] = 1;

    // searching
    cout<<m["kuldeep"]<<endl;
    // cout<<m["unknown"]<<endl;


}