#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    for(int i = 0;i<d.size();i++){
        cout<<d[i]<<", ";
        d.pop_front();
    }
    d.size();
    cout<<endl<<d.size();
    cout<<endl;
    for(int i = 0;i<d.size();i++){
        cout<<d[i]<<", ";
    }
    d.erase(d.begin(),d.end());
    for(int i = 0;i<d.size();i++){
        cout<<"khali ho gaya bhai"<<endl;
        cout<<d[i]<<", ";
    }
    cout<<d.size();

}