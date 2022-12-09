#include<iostream>
using namespace std;

void ipupdate(int *p){
    *p = *p + 1;
}

int main(){
    /*int t = 5;
    int *p = &t;
    cout<<endl<<*p<<" Before update "<<endl;
    update(p);
    cout<<endl<<*p<<" After update "<<endl;
    int t[]={1,2,3,4,5};
    int *p = &t[0];
    *p= *p+1;
    cout<<endl<<"Fresh "<<"p=> "<<p<<endl;
    cout<<endl<<"Fresh "<<"*p=> "<<*p<<endl;
    p= p+2;
    cout<<endl<<"After addtion of 2 p=> "<<p<<endl;
    p= p-2;
    cout<<endl<<"After Substraction of 2 p=> "<<p<<endl;
    cout<<endl<<"t=> "<<t<<endl;
    cout<<endl<<"*p=> "<<*p<<endl;
    cout<<endl;*/
    
    // character variable with pointers
    char t[10]= "abcde";
    char *p= &t[0];
    cout<<endl<<"Fresh t=>"<<t<<endl;
    cout<<endl<<"Fresh p=>"<<p<<endl;
    cout<<endl<<"Fresh *p=>"<<*p<<endl;

}