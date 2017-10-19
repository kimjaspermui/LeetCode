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
    bool isPalindrome(ListNode* head) {
        
        // case for empty list
        if (head == nullptr) {
            
            return true;
        }
        
        // pointers to find the half position and to reverse and compare
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head;
        ListNode* next = head;
        
        while (fast->next != nullptr && fast->next->next != nullptr) {
            
            // 1 step for slow, 2 steps for fast, 
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // set up the reverse operation
        prev = nullptr;
        slow = slow->next;
        
        // reverse half of the list until the end
        while (slow != nullptr) {
            
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        
        // make sure fast is at the end and slow is at the beginning of list
        fast = prev;
        slow = head;
        
        // while fast is not at the end of reverse, keep looping
        while (fast != nullptr) {
            
            // if the values are not equal, then return false
            if (slow->val != fast->val) {
                
                return false;
            }
            
            // otherwise, each moves one step
            slow = slow->next;
            fast = fast->next;
        }
        
        return true;
    }
};