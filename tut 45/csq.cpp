/*
#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
/*
Node* reverseLinkedList(Node *head)
{
    if(head == NULL || head->next  == NULL){
        return head;
    }
    Node* curr = head;
    Node* pre = NULL;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = pre;
        pre = curr;
        curr = forward;        
    }
    return pre;
}


*/