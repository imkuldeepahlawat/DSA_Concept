// implementation of stack using array
#include<bits/stdc++.h>
using namespace std;

class sack{
    // properties
    public:
    int *arr;
    int top;
    int size;

    // behaviour
    //constructor
    sack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // for add element
    void push(int element){
        if(size - top > -1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"There is no space in stack,basicaly stack is overflow";
        }
    }
    // for delete
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack is empty,Stack is underflow"<<endl;
        }
    }
    // see top element
    void peek(){
        if(top >= 0){
            cout<<arr[top];
        }
        else{
            cout<<"stack is underflow or empty";
        }
    }
    // empty or not
    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    sack as(10);
    if(as.isempty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty";
    }
}