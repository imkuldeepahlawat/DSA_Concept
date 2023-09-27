#include <bits/stdc++.h>
using namespace std;

bool solve(string str,int s,int e){
    if(str[s] != str[e]) return false;

    if(s>=e)return true;

    bool ans = solve(str,s+1,e-1);
    return ans;
}

int main(){

    string str = "noon";
    // cin>>n;
    // recursively solve
    bool rFact = solve(str,0,str.length()-1);
    if(rFact){
        printf("string is palidrome\n");
    }else{
        printf("string is not palidrome\n");
    }

    
}