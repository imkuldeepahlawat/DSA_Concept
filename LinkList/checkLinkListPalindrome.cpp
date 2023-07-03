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
// ---------------------------------------new list with check whther it is palindrome or not
// class Solution {
// public:
//     ListNode* rev(ListNode* head){
//         if(head == NULL || head->next == NULL) return head;

//         ListNode* send = head->next;

//         ListNode* ans = rev(head->next);
//         send->next = head;
//         head->next = NULL;
//         return ans;
//     }
//     bool isPalindrome(ListNode* head) {
//         if(head == NULL || head->next == NULL) return true;
//         ListNode* newlist = new ListNode();

//         ListNode* temp = newlist;
//         ListNode* h1 = head;
        
//         while(h1 != NULL){
//             ListNode* newNode = new ListNode(h1->val);
//             temp->next = newNode;
//             temp = temp->next;
//             h1= h1->next;
//         }
//         newlist->next = rev(newlist->next);
//         h1 = head;
//         temp = newlist->next;

//         while(temp != NULL && h1 != NULL){
//             if(h1->val != temp->val) return false;
//             h1 = h1->next; temp = temp->next;
//         }


//         return true;
//     }
// };


// -------------------------------using tortoise algorithm----------------
/***
 * class Solution {
public:
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->next;
    }
    ListNode* rev(ListNode* head){
        if(head == NULL || head->next == NULL) return head;

        ListNode* send = head->next;

        ListNode* ans = rev(head->next);
        send->next = head;
        head->next = NULL;
        return ans;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode* mid  = findMid(head);

        mid = rev(mid);
        
        ListNode* h1 = head;
        
        

        while(mid != NULL && h1 != NULL){
            if(h1->val != mid->val) return false;
            h1 = h1->next; mid = mid->next;
        }


        return true;
    }
};


*/