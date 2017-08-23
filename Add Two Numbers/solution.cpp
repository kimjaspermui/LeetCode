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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // variables for summation
        int num1 = 0;
        int num2 = 0;
        int sum = 0;
        
        // the carry from previous sum
        int carry = 0;
        
        // get the sum
        num1 = l1->val;
        num2 = l2->val;
        sum = num1 + num2 + carry;
        carry = sum / 10;
        
        // new linkedlist to return
        ListNode* out = new ListNode(sum % 10);
        ListNode* result = out;
        
        // move pointers
        l1 = l1->next;
        l2 = l2->next;

        // keep adding til both of them are NULL
        while (l1 || l2) {
            
            num1 = 0;
            num2 = 0;

            // case for first linkedlist
            if (l1) {
                
                num1 = l1->val;
                l1 = l1->next;
            }
            
            // case for second linkedlist
            if (l2) {
                
                num2 = l2->val;
                l2 = l2->next;
            }
            
            // get the sum
            sum = num1 + num2 + carry;
            
            // store the digit then go to the next node (assumed carry for last sum)
            out->next = new ListNode(1);
            out = out->next;
            out->val = sum % 10;

            // store the carry
            carry = (num1 + num2 + carry) / 10;
        }
        
        if (carry) {
            
            out->next = new ListNode(1);
        }
        
        return result;
    }
};