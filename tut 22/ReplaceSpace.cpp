// codestudio
#include <bits/stdc++.h> 
using namespace std;

string replaceSpaces(string &str){
	string temp;
    for(int i = 0;i<=str.length()-1;i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    str = temp;
    return str;
}