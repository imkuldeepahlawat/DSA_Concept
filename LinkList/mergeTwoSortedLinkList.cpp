
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

/**** using recursion ****
 * class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2){
        if(list1 == NULL) return list2;   
        if(list2 == NULL) return list1;
        ListNode* rndm;
        if(list1->val < list2->val){
            rndm = list1;
            rndm->next = merge(list1->next,list2);
        }else{
            rndm = list2;
            rndm->next = merge(list1,list2->next);
        }
        return rndm;

    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {   
        if(list1 == NULL) return list2;   
        if(list2 == NULL) return list1;   
         
         
        return merge(list1,list2);;
    }
};
*/



/**********
 * using pointers
 * 
 * 
 * class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {   
        if(list1 == NULL) return list2;   
        if(list2 == NULL) return list1;   
        ListNode* newhead = new ListNode(0); 
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* temp = newhead;
        while(t1 != NULL && t2 != NULL){
            if(t1->val < t2->val){
                temp->next = t1;
                t1 = t1->next;
                temp = temp->next;
            }else{
                temp->next = t2;
                t2 = t2->next;
                temp = temp->next;
            }
        }

        while(t1){
            temp->next = t1;
            t1 = t1->next;
            temp = temp->next;
        }

        while(t2){
            temp->next = t2;
            t2 = t2->next;
            temp = temp->next;
        }

        return newhead->next;
    }
};
*/