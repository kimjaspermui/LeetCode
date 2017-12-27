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

        ListNode* previous = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;

        // while current is not null, keep looping
        while (current) {

            // update next to current's next
            next = current->next;

            // update current's next to previous, previous to current
            // current to next
            current->next = previous;
            previous = current;
            current = next;
        }

        // return previous as the new head
        return previous;
    }
};
