#include<bits/stdc++.h>
using namespace std;

bool ispali(string&s,int i){
    int j = s.length()-i-1;
    // base case
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        //recursive call
        return ispali(s,i+1);
    }
}

int main(){
    string s = "ammb";
    bool palis = ispali(s,0);
    if(palis) cout<<"String is palindrome"<<endl;
    else cout<<"string is not palindrome"<<endl;
}

/*string strev(string& arr){
    int n =arr.length();
    for(int i = 0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
}
bool ispali(string&s,string&d){
    for(int i = 0;i<s.length()/2;i++){
        if(s[i]==d[i]){
            return true;
        }
    }
    return false;
}

int main(){
    string s = "abba";
    string d = strev(s);
    bool palis =ispali(s,d);
    if(palis){
        cout<<"The string is palindrome";
    }
    else{
        cout<<"The String is not palindrome";
    }
}*/