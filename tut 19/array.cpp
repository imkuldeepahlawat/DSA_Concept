#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    array<int,3> b={1,2,3};
    int ze = b.size();
    cout<<"size of Container array is => "<<ze<<endl;
    cout<<"b.at(2)== "<<b.at(2)<<endl;
    cout<<"b.empty()== "<<b.empty()<<endl;
    cout<<"b.front()== "<<b.front()<<endl;
    cout<<"b.back()== "<<b.back()<<endl;


}