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
	// creating destructor
	~node(){
		// int value = this->data;
		// memory free
		if(this->next != NULL){
			delete next;
			this->next = NULL;
		}
		cout<<endl<<"node kill "<<endl;//<<value<<endl;
	}
};
// function for adding number to head of linkedlist
void hi(node* &head,int d){
	// node* n = l1;
	// creating new node 
	node* n = new node(d);
	n->next = head;
	// changing properties
	head = n;	
}
// function for adding data at tail of the liked list
void ti(node* &tail,int d){
	// tail insertion
	node* n = new node(d);
	tail->next = n;
	tail = n;

}
void mi(node* & tail,node* & head,int position,int d){
	// insertion in start
	if(position == 1){
		hi(head,d);
		return;
	}
	// reaching count
	node* n = head;
	int cnt = 1;
	while(cnt < position-1){
		n = n ->next;
		cnt++;
	}
	// inserting at last positon
	if(n -> next ==NULL){
		ti(tail,d);
		return ;
	}
	// inserting at mid position
	node* n1 = new node(d);
	n1 ->next = n ->next;
	n ->next = n1;
}
// function for deletion
void dnl(int position,node* &head){
	// deleting first or start node
	if(position == 1){
		node* temp = head;
		head = head -> next;
		// memory free start node
		temp -> next = NULL;
		delete temp;
	}
	else{
		// deleting any middle node or last node
		node* curr = head;
		node* prev = NULL;

		int cnt =1;
		while(cnt<position){
			prev = curr;
			curr = curr-> next;
			cnt++;
		}		

		prev->next = curr->next;
		curr -> next = NULL;
		delete curr;
	}
}

void solve2(node *head,node *curr,node *prev){
    // base case
    if(curr == NULL){
        head = prev;
        return ;
    }
    // node* forward = curr->next;
    solve2(head,curr->next,curr);    
    curr->next = prev;
    
}
node* solve1(node *head)
{
    if(head == NULL || head->next  == NULL){
        return head;
    }
    node* curr = head;
    node* pre = NULL;
    node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = pre;
        pre = curr;
        curr = forward;        
    }
    return pre;
}


void printll(node* &head){
	if(head == NULL){
		cout<<"List is Empty"<<endl;
		return;
	}
	node* printer = head;

	while (printer !=NULL)
	{
		cout<<printer->data<<" ";
		printer = printer->next;
	}
	cout<<endl;
	
}

int main(){
	node* node1 = new node(10);
	node* head = node1;
	node* tail = node1;
	cout<<head->data<<" ";
	cout<<head->next<<" "<<endl;
	//creating node 1 and:-head and next for node1
    printll(head);
    // creating a new node
	hi(head,20);
	printll(head);
	ti(tail,30);
	printll(head);
	mi(tail,head,4,40);
	printll(head);
	mi(tail,head,5,50);
	printll(head);
	dnl(3,head);
    cout<<"Before Reversing"<<endl;
	printll(head);
    cout<<"after Reversing with solve1"<<endl;
    head = solve1(head);
	printll(head);
    cout<<"after Reversing with solve2"<<endl;
    node* curr = head;
    node* prev = NULL;
    // solve2(head,curr,prev);
	printll(head);
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
// 	// cout<<endl;
// 	// cout<<"Adding Second element"<<endl;
// 	// printll(head);
// 	// hi(head,20);
// 	// printll(head);
// 	// hi(head,30);
// 	// printll(head);
// 	// hi(head,40);
// 	// printll(head);
// 	// hi(head,50);
// 	// printll(head);
// 	// ti(tail,20);
// 	// printll(head);
// 	// ti(tail,30);
// 	// printll(head);
// 	// ti(tail,40);
// 	// printll(head);
// 	// ti(tail,50);
// 	// printll(head);

// }