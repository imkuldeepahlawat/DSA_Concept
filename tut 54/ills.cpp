#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    // properties
    int data;
    node* next;

    // constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class sack {
    public:
    // properties
    node* head;
    node* tail;
    node* top;
    int size = -1;
    
    // constructor
    sack(int element1){
        node* n1 = new node(element2);
        head = n1;
        tail = n1;
        top = n1;
        size++;
    }
    // add element
    void push(int element2){
        if(size >= 0){
            node* t1 =new node(element2);
            top->next = t1;
            top = t1;
        }
        else{
            cout<<"The stack is underflow"<<endl;
        }
    }

    // show or print element
    // pop
    // is empty
};

int main(){

}