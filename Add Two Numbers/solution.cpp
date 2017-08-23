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

        // ListNode, where result is head then myPointer will incrementally add new node
        ListNode result(0);
        ListNode* myPointer = &result;
        
        // carry variable
        bool carry = 0;
        
        // while loop to add while there is digit or carry
        while (l1 || l2 || carry) {
            
            // get the sum
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            
            // link new node with the sum digit then move to next
            myPointer->next = new ListNode(sum % 10);
            myPointer = myPointer->next;
            
            // update the carry
            carry = sum / 10;
            
            // move the ListNode if any
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        
        // return the first digit of result
        return result.next;
    }
};