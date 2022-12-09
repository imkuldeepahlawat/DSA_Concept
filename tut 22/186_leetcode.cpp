// reverse words in a string
#include<algorithm>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

string reverseWordsSt(string ex){
    int s = 0,e = ex.length()-1;
    while(s<e){
        swap(ex[s],ex[e]);
        s++;
        e--;
    }
    s = 0,e = ex.length()-1;
    while(s<e){
        if(isalpha(ex[s]))
    }
}

int main(){
    string s;
    char ws = ' '
    getline(cin>>s,);
    reverseWordsSt(s);
}