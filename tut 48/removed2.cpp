/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
    if(head == NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr != NULL){
        Node* pre = curr;
        Node* temp = curr->next;
        while(temp != NULL){
            if(curr->data == temp->data){
                Node* next_next = pre->next->next;
                Node* deleteto = pre->next;
                delete(deleteto);
                temp = next_next;
                pre->next = temp;
            }
            else{
                temp = temp->next;
                pre = pre->next;
            }
        }
        curr = curr->next;
    }
    return head;
}