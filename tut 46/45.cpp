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

//insertion function
void insertAtPosition(node* &tail, node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return ;
    }

    node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}
// for getting lenght of linked list
int getlenll(node* head){
    if(head == NULL){
        return 0;
    }
    int cnt = 0;

    while (head != NULL)
    {
        cnt++;
        head = head-> next;
    }
    
    return cnt;
}
// for revversing the linked list
void reversell(node* head){

}
// print linked list
void printll(node* head){
    while (head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    node* n1 = new node(15);
    node* head = n1;
    printll(head);
    insertAtHead(head,10);
    insertAtHead(head,100);
    int len = getlenll(head);
    printll(head);
    cout<<len;
}