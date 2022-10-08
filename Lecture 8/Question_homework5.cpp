// fibonacci series 
// print given number from series
// Write a program to print fibonacci series in C++
#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    int a = 0, b = 1;
    for (int i = 2; i < n; i++)
    {
        int fib = a + b;
        a = b;
        b = fib;
        cout<<fib<<",";
    }
    return 0;  


}

int main(){
    int f = 10;
    int a = 0, b = 1;
    cout<< a , b <<fib(f);
    return 0;
}