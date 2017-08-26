/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        // initialize the pointers with dummy head
        ListNode dummyHead = ListNode(0);
        dummyHead.next = head;
        ListNode* first = &dummyHead;
        ListNode* second = head;
        
        // while second is not at the end of list, keep swapping
        while (second && second->next) {
            
            // swap nodes
            first->next = second->next;
            second->next = second->next->next;
            first->next->next = second;
            
            // move the pointers
            first = second;
            second = second->next;
        }
        
        // return the new head
        return dummyHead.next;
    }
};