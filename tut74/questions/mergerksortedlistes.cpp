#include <queue>
/************************************************************

    Following is the linked list node structure

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
class comapre{
    public:
    bool operator()(Node<int>*a,Node<int>*b){
        return a->data > b->data;
    }
};

Node<int>* mergeKLists(vector<Node<int>*> &listArray)
{
    // Write your code here.
    priority_queue<Node<int>*,vector<Node<int>*>,comapre> pq;

    int k = listArray.size();
    if(k == 0)return NULL;

    // step 1
    for(int i = 0;i<k;i++){
        if(listArray[i]){
            pq.push(listArray[i]);
        }
    }

    Node<int>* head = NULL;
    Node<int>* tail = NULL;
    while(pq.size() > 0){
        Node<int>* top = pq.top();
        pq.pop();

        if(top->next != NULL){
            pq.push(top->next);
        }
        if(head == NULL){
            head = top;
            tail = top;
        }
        else{
            tail->next = top;
            tail = top;
        }
    }

    return head;
}
