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
//     ListNode* partition(ListNode* head, int x) {
//         if(head == NULL || head->next == NULL) return head;

//         ListNode* small = new ListNode(-1);
//         ListNode* smPtr = small;
//         ListNode* high = new ListNode(-1);
//         ListNode* hiPtr = high;
//         ListNode* temp = head;
//         while(temp != NULL){
//             int value = temp->val;
//             if( value < x){
//                 smPtr->next = temp;
//                 smPtr = smPtr->next;
//                 temp = temp->next;
//                 smPtr->next = NULL;
//             }else if(value >= x){
//                 hiPtr->next = temp;
//                 hiPtr = hiPtr->next;
//                 temp = temp->next;
//                 hiPtr->next = NULL;
//             }
//         }
//         smPtr->next = high->next;
//         return small->next;
//     }
// };