#include <bits/stdc++.h> 
using namespace std;  

int editDistance(string str1, string str2) 
{ 
    int n = str1.size();
    int m = str2.size();
    
    int cache[n+1][m+1];
    
    for(int i=0;i<=n;i++){
        cache[i][0] = i;
    }
    for(int j=0;j<=m;j++){
        cache[0][j] = j;
    }
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(str1[i-1]==str2[j-1]){
                cache[i][j] = 0+cache[i-1][j-1];
            }            
            else{
                cache[i][j] = 1+min(cache[i-1][j-1],min(cache[i-1][j],cache[i][j-1]));
            }
        }
    }
    
    return cache[n][m];
} 
int main() 
{
	string str1,str2;
	cin>>str1;
	cin>>str2;
	cout << editDistance(str1, str2);
}