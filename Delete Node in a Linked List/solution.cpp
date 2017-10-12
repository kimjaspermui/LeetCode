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
    void deleteNode(ListNode* node) {

        // initialize the next and previous pointer
        ListNode* next = node->next;
        ListNode* prev = node;

        // while next ddoesn't reached the tail, keep looping
        while (next) {

            // move the value, then move the pointers
            node->val = next->val;
            prev = node;
            node = node->next;
            next = next->next;
        }

        prev->next = nullptr;
    }
};