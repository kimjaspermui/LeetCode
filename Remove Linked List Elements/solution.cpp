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
    ListNode* removeElements(ListNode* head, int val) {

        // initialize a dummy head
        ListNode* dummyHead = new ListNode(-1);
        dummyHead->next = head;

        // set up previous and current node
        ListNode* previous = dummyHead;
        ListNode* current = head;

        // keep looping while current is not null
        while (current) {

            // if the current value is equal to val then update the previous'
            // next to current's next
            if (current->val == val) {

                previous->next = current->next;
            }

            // otherwise, just move the pointers to next ndoe
            else {

                previous = current;
            }

            current = current->next;
        }

        // return the real head
        return dummyHead->next;
    }
};
