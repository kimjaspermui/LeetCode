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

        // copy the values from next node then delete it
        ListNode* tempNext = node->next;
        node->val = tempNext->val;
        node->next = tempNext->next;
        delete tempNext;
    }
};
