#include <iostream>
using namespace std; 
int main(){
    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // cout<<endl;
    // cout<<"&a is :- "<<&a<<endl;
    // cout<<endl;
    // cout<<"a is :- "<<a<<endl;
    // cout<<endl;
    // cout<<"*p is :- "<<*p<<endl;
    // cout<<endl;
    // cout<<"p is :- "<<p<<endl;
    // cout<<endl;
    // cout<<"q is :- "<<q<<endl;
    // cout<<endl;
    // cout<<"**q is :- "<<**q<<endl;
    // cout<<endl;

    // attempt1
    /*float  f = 10.5;
    float p = 2.5;
    float *ptr =&f;
    cout<<"f is "<<f<<endl;
    cout<<endl;
    cout<<"p is "<<p<<endl;
    cout<<endl;
    cout<<"*ptr is "<<*ptr<<endl;
    cout<<endl;
    (*ptr)++;
    cout<<"*ptr is "<<*ptr<<endl;
    cout<<endl;
    *ptr = p;
    cout<<"*ptr is "<<*ptr<<endl;
    cout<<endl;
    cout<<*ptr<<" "<<f<<" "<<p;*/
    
    //qustion 
    // int a[]={1,2,3,4};
    // int *c;
    // cout<<*(a)<<" "<<*(a+1);
    
    // qustion
    // int a[3]={1,2,3};
    // // int *c;
    // cout<<*(a+2);

    // question
    char a[]="xyz";
    int *p= &a[0];
    cout<<p<<endl;
    cout<<*a+9<<endl;

    return 0; 
    }








    /*int firstvalue = 5, secondvalue = 15; 
    char thirdvalue = 'a'; 
    int * p1, * p2; 
    char * p3; 
    p1 = & firstvalue; // p1 = address of firstvalue 
    p2 = & secondvalue; // p2 = address of secondvalue 
    p3 = & thirdvalue; // p3 = address of thirdvalue 
    *p1 = 10; // value pointed to by p1 = 10 
    cout<<endl;
    cout<<"The first value is "<<firstvalue<<" and p1== "<<*p1<<endl;
    cout<<"The second value is "<<secondvalue<<" and p2== "<<*p2<<endl;
    cout<<endl;
    cout<<"Value of *p1 "<<*p1<<endl;
    cout<<endl;
    *p2 = *p1; // value pointed to by p2 = value pointed to by p1 
    cout<<"Value of *p1 befor *p2=*p1 "<<*p1<<" :- "<<firstvalue<<endl;
    cout<<"Value of *p2 after *p2=*p1 "<<*p2<<" :- "<<secondvalue<<endl;
    cout<<endl;
    p1 = p2; // p1 = p2 (value of pointer is copied) 
    cout<<"Value of p1 after p1=p2 "<<p1<<" :- "<<firstvalue<<endl;
    cout<<"Value of p2 after p1=p2 "<<p2<<" :- "<<secondvalue<<endl;
    cout<<endl;
    cout<<"Value of *p1 befor *p2=*p1 "<<*p1<<" :- "<<firstvalue<<endl;
    cout<<"Value of *p2 after *p2=*p1 "<<*p2<<" :- "<<secondvalue<<endl;
    *p1 = 20; // value pointed to by p1 = 20 
    cout<<endl;
    cout<<"Value of *p1 after *p1=20 "<<*p1<<" :- "<<firstvalue<<endl;
    cout<<"Value of *p2 after p1=p2 "<<*p2<<" :- "<<secondvalue<<endl;
    *p3 = 'b'; // value pointed to by p3 = ‘b ’ 
    cout << "firstvalue is " << firstvalue << endl; 
    cout << "secondvalue is " << secondvalue << endl; 
    cout << "thirdvalue is " << thirdvalue << endl; */