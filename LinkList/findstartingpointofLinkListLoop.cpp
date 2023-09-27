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
//     ListNode *detectCycle(ListNode *head) {
//         if(head == NULL || head->next == NULL ) return NULL;
//         set<ListNode*>check;

//         ListNode* temp = head;

//         while(temp){
//             if(check.find(temp) != check.end()){
//                 return temp;
//             }
//             check.insert(temp);
//             temp = temp->next;
//         }

//         return NULL;
//     }
// };


/***
 * using floyds algorithm
 * class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                fast = head;
                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }

        

        return NULL;
    }
};
*/