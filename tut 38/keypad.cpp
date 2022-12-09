// letter combination of a phone number
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void solve(string digits,string output,int index,vector<string>&ans,string mapping[]){
    //base case
    if(index>=digits.length()){
        ans.push_back(output);
        return ;
    }

    //converting element to string to element
    int numbers = digits[index] - '0';
    string value = mapping[numbers];
    for(int i = 0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digits,output,index + 1,ans,mapping);
        output.pop_back();
    }
}

int main(){
    string digits = "46";
    vector<string> ans;
    if(digits.length() == 0){
        return 0;
    }
    string output;
    int index =0;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,ans,mapping);
    for(int i = 0;i<ans.size()-1;i++){
        cout<<ans[i]<<", ";
    }
}