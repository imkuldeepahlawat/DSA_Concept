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
// ---------------------------------------------------------
// reverses in k groups

node* kReverse(node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    node* forw = NULL;
    node* curr = head;
    node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        forw = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forw;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(forw != NULL) {
        head -> next = kReverse(forw,k);
    }
    
    //step3: return head of reversed list
    return prev;
}
// ---------------------------------------------------------
// isnersstion on head
node* hll(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}
// insertion on tail
node* tll(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}
// printing linked list
void pll(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
bool cirornot(node* head){
    node* temp = head;
    while(temp != NULL){
        if(temp->next == head){
            cout<<"Ha Ye Circular Linkedlist hai"<<endl;
            return true;
        }
        temp = temp->next;
    }
    cout<<endl<<"Ye Circular linked list Nahi hai"<<" ";
    return false;
}
// checking is the circular linked list is present or not
map<node*,bool> vis;

bool checkcll(node* head){
    
    if(head == NULL){
        return false;
    }
    if(!vis[head]){
        vis[head] = true;
        checkcll(head->next);
    }
    else{
        return true;
    }
}



// main function
int main(){
    node* n1 = new node(10);
    node* head = n1;
    node* tail = n1;
    hll(head,9);
    hll(head,8);
    hll(head,7);
    hll(head,6);
    hll(head,5);
    hll(head,4);
    hll(head,3);
    hll(head,2);
    hll(head,1);
    // hll(head,0);;
    head = kReverse(head,2);
    pll(head);
    // testing for circular linked list yes or not
            // tail->next = head;
    // bool yn = cirornot(head);
    bool yn = checkll(head);
    cout<<yn<<endl;

}
