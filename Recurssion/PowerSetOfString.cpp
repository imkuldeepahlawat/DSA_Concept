#include <bits/stdc++.h>
using namespace std;

void solve(string str,string temp,int inx){
    

    if(inx == str.size()){
        cout<<temp<<endl;
        return;
    }
    // taking the word from the string of inx index
    solve(str,temp+str[inx],inx+1);
    // not taking the word from the string of inx index
    solve(str,temp,inx+1);
    
}

int main(){

    string str = "abc";
    // cin>>n;
    // recursively solve
    solve(str,"",0);
    

    
}