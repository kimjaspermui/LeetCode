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
        
        // initialize output list head
        ListNode dummyHead(-1);
        ListNode* current = &dummyHead;
        
        // comparison function for priority queue
        auto myComp = [](const ListNode* a, const ListNode* b) {
            
            if (a->val >= b->val) {
                
                return true;
            }
            
            return false;
        }
        
        // define priority queue
        priority_queue<ListNode*>, vector<ListNode*>, myComp> myPQ;
        
        // insert head of all lists
        for (int i = 0; i < lists.size(); i++) {
            
            // don't insert nullptr
            if (lists[i] != nullptr) {
                
                myPQ.push(lists[i]);
            }
        }
        
        // keep looping until priority queue is empty
        while (!myPQ.empty()) {
            
            // get the min node
            ListNode* minNode = myPQ.top();
            myPQ.pop();
            
            // update the pointers
            current->next = minNode;
            current = current->next;
            
            // get the next of minNode
            ListNode* next = minNode->next;
            
            // if it is not nullptr, then push it to pq
            if (next != nullptr) {
                
                myPQ.push(next);
            }
        }
        
        return dummyHead.next;
    }
};