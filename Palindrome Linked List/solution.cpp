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

        // if less than 2 nodes, then return true
        if (!head || !head->next) {

            return true;
        }

        // first and second half pointers
        ListNode* first = head;
        ListNode* second = nullptr;

        // this will keep track of the size of the linked list
        int count = 0;

        // count the number of nodes
        while (head) {

            count++;
            head = head->next;
        }

        // this will be use for reversing the first half
        ListNode* previous = nullptr;
        ListNode* next = nullptr;

        // reverse first half of the linked list
        for (int i = 0; i < count / 2; i++) {

            next = first->next;
            first->next = previous;
            previous = first;
            first = next;
        }

        // set up the pointers
        first = previous;
        second = next;
        if (count % 2 != 0) {

            second = second->next;
        }

        // start comparing
        while (first && second) {

            // if not equal then return false for not palindrome
            if (first->val != second->val) {

                return false;
            }

            // update pointers
            first = first->next;
            second = second->next;
        }

        return true;
    }
};
