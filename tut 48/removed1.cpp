// approch using while loop
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        // creating constructor
    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    // code from code studio
    // remove duplicates from sorted list 
    /*
    Node * uniqueSortedList(Node * head) {
    if(head == NULL){
        return NULL;
    }
    Node* curr = head;
    
    while(curr != NULL){
        if((curr->next != NULL) && curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* nodetodelete =curr->next;
            delete(nodetodelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}
    */
}