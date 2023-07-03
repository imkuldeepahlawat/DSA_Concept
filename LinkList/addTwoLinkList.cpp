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
// class Solution {
// public:
//     ListNode* reverse(ListNode* head){
//         if(head == NULL || head->next == NULL) return head;

//         ListNode* send = head->next;
//         ListNode* ans = reverse(head->next);
//         send->next = head;
//         head->next = NULL;

//         return ans;

        
//     }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

//         if(l1 == NULL) return l2;
//         if(l2 == NULL) return l1;
        

//         // l1 = reverse(l1);
//         // l2 = reverse(l2);

//         ListNode* newHead = new ListNode();
//         ListNode* temp= newHead;
//         ListNode* t1 = l1;
//         ListNode* t2 = l2;
//         int cary = 0;
//         while(t1 != NULL && t2 ){
//             int val1 = t1->val;
//             int val2 = t2->val;
//             int sum = val1+val2+cary;
//             cary = sum/10;
//             int digit = sum%10;
//             ListNode* tempNode = new ListNode(digit);
//             temp->next = tempNode;
//             temp = temp->next;
//             t1 = t1->next;
//             t2= t2->next;
//         }

//         while(t1 != NULL){
//             int val1 = t1->val;
//             int sum = val1+cary;
//             cary = sum/10;
//             int digit = sum%10;
//             ListNode* tempNode = new ListNode(digit);
//             temp->next = tempNode;
//             temp = temp->next;
//             t1 = t1->next;
            
//         }
//         while(t2 != NULL){
//             int val2 = t2->val;
//             int sum = val2+cary;
//             cary = sum/10;
//             int digit = sum%10;
//             ListNode* tempNode = new ListNode(digit);
//             temp->next = tempNode;
//             temp = temp->next;
            
//             t2 = t2->next;
//         }

//         if(cary != 0){
//             ListNode* tempNode = new ListNode(cary);
//             temp->next = tempNode;
//             temp = temp->next;
//         }

//         // newHead->next = reverse(newHead->next);

//         return newHead->next;
//     }
// };