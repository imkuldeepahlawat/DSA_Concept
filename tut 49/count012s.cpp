#include<iostream>
#include<map>
using namespace std;

class node {
    public:
    int data;
    node* next;

    //constrcutor
    node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void hll(node* head,int data){
    node* temp = new node(data);
    if(head == NULL){
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}

void insertnode(node* &tail, int element, int d) {
    

    //empty list
    if(tail == NULL) {
        node* newnode = new node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(node* tail) {

    node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void deletenode(node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        node* prev = tail;
        node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}

bool detectLoop(node* head) {

    if(head == NULL)
        return false;

    map<node*, bool> visited;

    node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}


int main() {

    node* tail = NULL;

   // insertnode(tail, 5, 3);
    //print(tail);

  //  insertnode(tail, 3, 5);
   // print(tail);

/*
    insertnode(tail, 5, 7);
    print(tail);

    insertnode(tail, 7, 9);
    print(tail);

    insertnode(tail, 5, 6);
    print(tail);
    
    insertnode(tail, 9, 10);
    print(tail);

    insertnode(tail, 3, 4);
    print(tail);
   

    deletenode(tail, 5);
    print(tail);
     */

    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}