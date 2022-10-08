#include<iostream>
using namespace std;
int update(int a){
    int ans = a / 2;
    return ans;
}
int main(){
    int a = 10;
    a = update(a);
    cout<<a<< endl;
}