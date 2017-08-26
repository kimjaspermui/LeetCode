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
    
    // this function will return the current pointer then increment to the next
    ListNode* next(ListNode*& myPointer) {
        
        ListNode* temp = myPointer;
        myPointer = myPointer->next;
        return temp;
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        // create a new dummy head pointer and iterator
        ListNode newHead(0);
        ListNode* myIter = &newHead;

        // while both list have nodes, connect the smaller node
        while (l1 && l2) {
            
            myIter->next = l1->val <= l2->val ? next(l1) : next(l2);
            myIter = myIter->next;
        }
        
        // append the remaining nodes
        myIter->next = l1 ? l1 : l2;
        
        return newHead.next;
    }
};