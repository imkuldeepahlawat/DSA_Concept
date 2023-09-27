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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         set<ListNode*>check;
//         ListNode* tempnode = new ListNode();

//         ListNode* t1 = headA;
//         ListNode* t2 = headB;
//         while(t1 != NULL){
//             check.insert(t1);
//             t1 = t1->next;
//         }
//         while(t2 != NULL){
//             if(check.find(t2) == check.end()){
//                 check.insert(t2);
//                 t2 = t2->next;
//             }else{
//                 return t2;
//             }
//         }

//         return NULL;
//     }
// };


/**
 * with constant space
 * class Solution {
public:
    int getdiff(ListNode *headA, ListNode *headB){

        int l1 = 0,l2 = 0;

        while(headA != NULL  || headB != NULL){
            
            if(headA != NULL){
                l1++;
                headA = headA->next;
            }
            if(headB != NULL){
                l2++;
                headB = headB->next;
            }
        }
       return l1-l2;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        

        

        int diff = getdiff(headA,headB);

        if(diff < 0){
            while(diff++ != 0) headB = headB->next;
        }else{
            while(diff-- != 0) headA = headA->next;
        }
              

        

        while(headA != NULL && headB != NULL){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }

        return NULL;

    }
};
*/