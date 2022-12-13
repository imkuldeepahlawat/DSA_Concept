#include<bits/stdc++.h>
using namespace std;

// node object
class node{
    public:
    int data;
    node *next;
    // constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// insertoion on head 
void insertAtHead(node* &head,int d){
    node* n1 = new node(d);
    n1->next = head;
    head = n1;
}

//insertion on tail
void insertAtTail(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

//print linked list
void printll(node* head){
    // while head is not NULL
    while(head != NULL){
        cout<<head->data;
        head->next;
    }
    return ;
}
// main function
int main(){
    node* n1 = new node(-1);
    node* head = n1;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    printll(head);
}