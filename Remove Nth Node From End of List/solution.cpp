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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // first will be previous of node to be deleted,
        // and second will be at the end of the list
        ListNode* first = new ListNode(0);
        ListNode* second = head;
        first->next = head;
        
        // for loop to make secon go to next n distance away from first
        for (int i = 0; i < n; i++) {
            
            second = second->next;
        }
        
        // while second is not nullptr then keep going
        while (second) {
            
            first = first->next;
            second = second->next;
        }
        
        // update the next pointer of previous node of the node to be deleted
        first->next = first->next->next;
        
        // case when first node is remove then return the next node, 
        // making sure head is not first, otherwise, return head
        return (head->next == first->next && head != first) ? head->next : head;
    }
};