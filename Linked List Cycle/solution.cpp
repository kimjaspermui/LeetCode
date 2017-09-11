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
    bool hasCycle(ListNode *head) {
        
        // two pointers to iterate
        ListNode* first = head;
        ListNode* second = head;
        
        // while first and second not null, keep checking
        while (first && second) {
            
            // first go one step, second go two steps
            first = first->next;
            second = second->next;
            
            // if second is null then return false
            if (!second) {
                
                break;
            }
            
            second = second->next;
            
            // when first and second meet, there's a cycle
            if (first == second) {
                
                return true;
            }
        }
        
        return false;
    }
};