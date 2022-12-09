#include<bits/stdc++.h>
#include<vector>
using namespace std;
// this function is for checking lower or uppercase
char lo(char k){
   if(k >= 'a' && k <= 'z' || k >= '0' && k <= '9')
       return k;
       return k - 'A' + 'a';
}
// this funtion is for checking special charaters
bool cs(char n){
   if(n >= 'a' && n <= 'z' || n >= '0' && n <= '9')
       return true;
   return false;
}

// this function is for checking thi string is pelindrome or not
bool checkPalindrome(string s){
    int st =0;
    int e =s.size()-1;
    while(st<=e){
        if(cs(lo(s[st])) != cs(lo(s[e]))){
            return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}

int main(){
    string s;
    s= "Noon";
    cout<<s<<endl;
    cout<<checkPalindrome(s)<<endl;
    cout<<"yaha tak nahi pahuncha bhai"<<endl;

}
// this function from code studio discussion section
/*

#include <bits/stdc++.h> 
char toLowerCase(char k){
   if(k >= 'a' && k <= 'z' || k >= '0' && k <= '9')
       return k;
       return k - 'A' + 'a';
}

bool checkSpecialChar(char n){
   if(n >= 'a' && n <= 'z' || n >= '0' && n <= '9')
       return true;
   return false;
}
bool checkPalindrome(string s)
{
   int i = 0;
   int j = s.size()-1;
   while(i<=j){
       if(checkSpecialChar(toLowerCase(s[i])) && checkSpecialChar(toLowerCase(s[j]))){
           if(toLowerCase(s[i]) != toLowerCase(s[j])){
               return false;
           }else{
               i++;
               j--;
           }
       }else if(!checkSpecialChar(toLowerCase(s[i]))){
           i++;
       }else{
           j--;
       }
   }
   return true;
}


*/