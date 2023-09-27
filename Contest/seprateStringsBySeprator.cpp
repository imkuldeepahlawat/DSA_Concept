#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>ip = {"one.two.three","four.five","six"};
    char separator = '.';
    int n = ip.size();
    vector<string>ans;

    for(int i = 0;i<n;i++){
        string temp = "";
        for(int j = 0;j<ip[i].size();j++){
            if(ip[i][j] == separator && temp.size() != 0){
                ans.push_back(temp);
                temp = "";
            }else if(ip[i][j] != separator){
                temp.push_back(ip[i][j]);
            }
        }
        if(temp.size() != 0){
            ans.push_back(temp);
        }        
    }

    for(int i = 0;i,ans.size();i++){
        cout<<ans[i]<<endl;
    }
}