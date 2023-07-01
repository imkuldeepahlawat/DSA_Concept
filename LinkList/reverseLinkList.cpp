

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/************
 * class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* pre = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            ListNode* temp = curr->next;
            curr->next = pre;
            pre = curr;
            curr = temp;
        }

        return pre;
        
    }
};


 * 
 * 
 *
 * 
 * 
*/


/********************************
 * using recursive approach
 * ********************************
 *  ListNode* solve(ListNode* head){

        if (head == NULL || head->next == NULL  ) {
            return head;
        }


        ListNode* send = head->next;
        ListNode* ans = solve(head->next);
        send->next = head;
        head->next = NULL;
        return ans;
    }
class Solution {
public:
    
    ListNode* reverseList(ListNode* head) {
        
        return solve(head);
    }
};
*/