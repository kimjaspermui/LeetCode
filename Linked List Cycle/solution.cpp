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

        // empty list return false for no cycle
        if (!head) {

            return false;
        }

        // initialize two pointers at the beginning of the linked list
        ListNode* slow = head;
        ListNode* fast = head;

        // while fast's next pointer is not null then keep looping
        while (fast->next && fast->next->next) {

            // update the pointers, fast 2x
            slow = slow->next;
            fast = fast->next->next;

            // if they meet, then there's a cycle
            if (slow == fast) {

                return true;
            }
        }

        // reach end, then return false
        return false;
    }
};
