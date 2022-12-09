#include<iostream>
using namespace std;
//macro define function
// #define Instagram Followers
// #define Followers 137
// ----------------------------------------------
//Global Variable
// int s = 5;
// -------------------------------------------------------------------------
// inline function
inline int getMAX(int& a,int& b){
    return (a>b)?a:b;
}

// //Default arguments
// //this should be start from rightmost always
// void printa(int arr[],int n,int start = 0){
// //in the last line the start variable is default arguments

//     for(int i = start;i<n;i++){
//         cout<<arr[i]<<", ";
//     }
// }
int main(){
    // cout<<endl;
    // cout<<" Your Instagram Follower is "<<Instagram<<"K Right!"<<endl;
    // cout<<endl;
    /*Macro is a peice of code in programme that is replaced by value*/
    
    // ------------------------------------------------------------------
    /*Global variable is a type of variable threfore we can use use anywhere in the code*/
    //cout<<"This is example of global Variable "<<s;
    // ---------------------------------------------------------------------
    // //inline function is a funtion who we can define in only 1 or 2 lines
    // //and when the code start compiling the value from inline function will change
    // //with return value
    // int a = 1,b = 2;
    // cout<<getMAX(a,b);


    // ------------------------------------------------------------------
    /*until we will define the value of start it is 0*/
    // int arr[6]={1,2,3,4,5};
    // printa(arr,5);
}