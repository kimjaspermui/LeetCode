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

    // this function will get the size of the linkedlist
    int getSize(ListNode* root) {

        int count = 0;

        while (root) {

            root = root->next;
            count++;
        }

        return count;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        // still will keep track of the size of both linked list
        int sizeA = getSize(headA);
        int sizeB = getSize(headB);

        // keep moving A until they start at the same position
        // if they will interesect (case when sizeA is larger)
        while (sizeA > sizeB) {

            headA = headA->next;
            sizeA--;
        }

        // keep moving B until they start at the same position
        // if they will interesect (case when sizeB is larger)
        while (sizeB > sizeA) {

            headB = headB->next;
            sizeB--;
        }

        // loop until they are equal or when one of them is nullptr
        while (headA != headB && headA && headB) {

            headA = headA->next;
            headB = headB->next;
        }

        // intersect at this point if both are not null, otherwise, return null
        return (headA && headB) ? headA : nullptr;
    }
};
