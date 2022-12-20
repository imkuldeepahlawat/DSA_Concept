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
// print linked list
void printll(node* head){
    while (head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

// using map
bool detectLoop(node* head){
    if(head == NULL){
        return false;
    }

    map<node*,bool> visited;
    
    node* temp = head;

    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
// floyd detection algorithm
node* fda(node* head){
    if(head == NULL){
        return head;
    }
    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast ->next;
        }
        slow = slow->next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}
// get the node from where the loop is started
node* gsn(node* head){
    if(head == NULL){
        return head;
    }
    node* intersection = fda(head);
    node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removel(node* head){
    if(head == NULL){
        return ;
    }
    node* startingloop = gsn(head);
    node* temp = startingloop;

    while(temp->next != startingloop){
        temp= temp->next;
    }
    temp->next = NULL;
}

int main(){
    node* n1 = new node(1);
    node* head = n1;
    node* tail = n1;
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    node* l1 = tail;
    insertAtTail(tail,5);
    insertAtTail(tail,6);
    insertAtTail(tail,7);
    tail->next = l1;
    removel(head);
    printll(head);
    insertAtTail(tail,8);
    insertAtTail(tail,9);
    printll(head);

}