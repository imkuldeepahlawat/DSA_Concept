#include<iostream>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

void Prints(stack<string> st){
    while(1){
        if(st.empty()){
            return;
            break;
        }
        else{
            cout<<st.top()<<" "<<endl;
        }
        st.pop();
    }

}


int main(){

    // jo sabse last m aayega vo sbse pehle jayega
    stack<string>s;
    s.push("Dosa");
    s.push("Love");
    s.push("Kuldeep");
    s.push("Dosa");
    s.push("Love");
    s.push("Kuldeep");
    s.push("Dosa");
    s.push("Love");
    s.push("Kuldeep");
    s.push("Dosa");
    s.push("Love");
    s.push("Kuldeep");
    s.push("Dosa");
    s.push("Love");
    s.push("Kuldeep");
    Prints(s);
    }