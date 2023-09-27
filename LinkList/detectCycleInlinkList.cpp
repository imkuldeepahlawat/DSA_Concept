/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head == NULL || head->next == NULL) return false;
        
//         ListNode* slow = head;
//         ListNode* fast = head;

//         while(fast->next !=NULL && fast->next->next != NULL){
//             slow = slow->next;
//             fast = fast->next->next;
            
//             if(fast == slow){
//                 return true;
//             }
//         }

//         return false;
        
//     }
// };


/**
 * 
 * class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return false;
        //     making dupicate
    ListNode* temp = head;
    set<ListNode*>check;
//     loop if circular then break eiher continue untill head next is NULL
    while(temp != NULL){
        if(check.find(temp) == check.end()){
//             cout<<"Ha Ye Circular Linkedlist hai"<<endl;
            check.insert(temp);
            temp = temp->next;

        }else{
            return true;
        }
    }
//     cout<<endl<<"Ye Circular linked list Nahi hai"<<" ";
    return false;
    }
};
*/



