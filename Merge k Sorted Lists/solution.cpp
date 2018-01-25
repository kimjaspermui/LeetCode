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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        // nullptr for empty list
        if (lists.size() == 0) {

            return nullptr;
        }

        // keep looping
        while (lists.size() > 1) {

            // overwrite the first element then remove the 2nd element
            lists[0] = merge(lists[0], lists[1]);
            lists.erase(lists.begin()+1);
        }

        // return the final list
        return lists[0];
    }

    ListNode* merge(ListNode* a, ListNode* b) {

        // this is the dummy head and current pointer of new List
        ListNode dummyHead(-1);
        ListNode* current = &dummyHead;

        // keep looping until the end of one of the lists
        while (a && b) {

            // a has lesser element then link it
            if (a->val <= b->val) {

                current->next = a;
                a = a->next;
            }

            // else link b
            else {

                current->next = b;
                b = b->next;
            }

            // go to next node
            current = current->next;
        }

        // get the remaining of a
        if (a) {

            current->next = a;
        }

        // else get the remaining of b
        else {

            current->next = b;
        }

        return dummyHead.next;
    }
};
