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
        
        // these stacks will store the digits
        stack<int> stack1;
        stack<int> stack2;
        stack<int> returnStack;
        
        // this will indicate if there's a carry
        bool carry = false;
        
        // this will contain the new list
        ListNode* newList = new ListNode(0);
        
        // push digits to stack 1
        while (l1) {
            
            stack1.push(l1->val);
            l1 = l1->next;
        }
        
        // push digits to stack 2
        while (l2) {
            
            stack2.push(l2->val);
            l2 = l2->next;
        }
        
        // while both stacks are not empty keep adding digits
        while (!stack1.empty() && !stack2.empty()) {
            
            // get the numbers then pop them
            int first = stack1.top();
            int second = stack2.top();
            stack1.pop();
            stack2.pop();
            
            // sum it
            int sum = first + second;
                     
            // if carry then add 1
            if (carry) {

                sum += 1;
                carry = false;
            }
            
            // if greater or equal to 10, turn on carry
            if (sum >= 10) {

                carry = true;
            }
            
            // push the digit to result
            returnStack.push(sum % 10);
        }
        
        // exhaust stack 1 if there are left
        while (!stack1.empty()) {
            
            // get the number then pop it
            int digit = stack1.top();
            stack1.pop();
            
            // if carry then add 1
            if (carry) {
                
                digit += 1;
                carry = false;
            }
            
            // if greater than or equal to 10, then turn on carry
            if (digit >= 10) {
                
                carry = true;
            }
            
            // push the digit
            returnStack.push(digit % 10);
        }
        
        // exhaust stack 1 if there are left
        while (!stack2.empty()) {
            
            // get the number then pop it
            int digit = stack2.top();
            stack2.pop();
            
            // if carry then add 1
            if (carry) {
                
                digit += 1;
                carry = false;
            }
            
            // if greater than or equal to 10, then turn on carry
            if (digit >= 10) {
                
                carry = true;
            }
            
            // push the digit
            returnStack.push(digit % 10);
        }
        
        // carry then push additional 1
        if (carry) {
            
            returnStack.push(1);
        }
        
        // set up a temporary pointer
        ListNode* tempPointer = newList;
        
        // get all digits from the stack
        while (!returnStack.empty()) {
            
            // append the digit from stack
            tempPointer->next = new ListNode(returnStack.top());
            returnStack.pop();
            
            // move the pointer
            tempPointer = tempPointer->next;
        }
        
        // return the head of new list
        return newList->next;
    }
};