#include<bits/stdc++.h>
using namespace std;

string is_palindrome(int n)
		{
		    // Code here.
		    string str = to_string(n);
		    
		    int s = 0;
		    int e = str.size()-1;
		    
		    while(s<e){
		        if(str[s] != str[e]){
		            return "No";
		        }
		        s++;
		        e--;
		    }
		    
		    return "Yes";
		}


int main(){
    string ans = is_palindrome(555);
    printf("%d\n", ans);
}