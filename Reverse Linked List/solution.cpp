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
    ListNode* reverseList(ListNode* head) {
        
        // this will keep track of the potential new head and the current node
        ListNode* newHead = nullptr;
        ListNode* currentNode = nullptr;
        
        // while loop until head is past the end
        while (head) {
            
            // update current node to next, then move head to the next,
            // then reverse the next pointer to previous, then update the previous
            // to new head
            currentNode = head;
            head = head->next;
            currentNode->next = newHead;
            newHead = currentNode;
        }
        
        return newHead;
    }
};