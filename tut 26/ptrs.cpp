// pointers in cplusplus
#include<iostream>
using namespace std;

int main(){
    int m  =  5;
    int *p = &m;
    int n = 10;
    cout<<endl;
    cout<<" variable value is "<<m<<endl;
    cout<<" variable address value is "<<*p<<endl;
    cout<<" variable address is "<<p<<endl;
    p = p+1;
    (*p)++;
    cout<<" variable address is "<<p<<endl;
    cout<<" variable address value of n is "<<*p<<endl;
    cout<<" variable address value after increment is "<<n<<endl;

    cout<<endl;

}