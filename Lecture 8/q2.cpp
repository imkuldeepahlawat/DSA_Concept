#include<iostream>
using namespace std;
int update(int a){
     int ans = a - 5;
    return ans;
}
int main(){
    int a = 15;
    a = update(a);
    cout<<a<< endl;
}