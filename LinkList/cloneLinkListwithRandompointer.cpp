/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
/*****************with time complexity of N and space complexity of N**********************/
// class Solution {
// public:
//     void createNew(Node* &head,Node* &tail,int data){
//         Node* newNode = new Node(data);
//         if(head == NULL){
//             head = newNode;
//             tail = newNode; 
//         }else{
//             tail->next = newNode;
//             tail = tail->next;
//         }

//     }
//     Node* copyRandomList(Node* head) {
//         if(head == NULL) return NULL;

//         Node* cloneHead = NULL;
//         Node* cloneTail = NULL;
//         Node* temp = head;
//         // copy list without random pointer
//         while(temp != NULL){
//             createNew(cloneHead,cloneTail,temp->val);
//             temp = temp->next;
//         }
//         // create maping
//         unordered_map<Node*,Node*>check;
//         Node* originalNode = head;
//         Node* cloneNode = cloneHead;
//         while(originalNode != NULL && cloneNode != NULL){
//             check[originalNode] = cloneNode;
//             originalNode = originalNode->next;
//             cloneNode = cloneNode->next;
//         }
//         // copy random pointer in clone node
//         originalNode = head;
//         cloneNode = cloneHead;
//         while(originalNode != NULL && cloneNode != NULL){
//             cloneNode->random = check[originalNode->random];
//             originalNode = originalNode->next;
//             cloneNode = cloneNode->next;
//         }

//         return cloneHead;

        
//     }
// };
//----------------with constant space-------------
/***
 * class Solution {
public:
    void createNew(Node* &head,Node* &tail,int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode; 
        }else{
            tail->next = newNode;
            tail = tail->next;
        }

    }
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;

        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        // copy list without random pointer
        while(temp != NULL){
            createNew(cloneHead,cloneTail,temp->val);
            temp = temp->next;
        }

        // clone nodes in between new list        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL){
            Node* nex = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = nex;
            nex = cloneNode->next;
            cloneNode->next = originalNode;
            cloneNode = nex;
        }
        // 
        temp = head;
        
        while(temp != NULL){
            if(temp->next != NULL){
                temp->next->random = temp->random ? temp->random->next:temp->random;
            }
            temp = temp->next->next;
        }

        originalNode = head;
        cloneNode = cloneHead;
        // reverse the changes
        while(originalNode != NULL && cloneNode != NULL){           
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            if(originalNode != NULL){
                cloneNode->next = originalNode->next;    
            }
            cloneNode = cloneNode->next;
            
        }
        

        return cloneHead;

        
    }
};


*/