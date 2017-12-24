/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        // edge case, empty tree, then return empty vector
        if (!root) {

            return vector<vector<int>>();
        }

        // this will store the level values in order, initialize it with
        // empty int vector
        vector<vector<int>> orderedVector;
        orderedVector.push_back(vector<int>());

        // queue for BFS, initialized with the root
        queue<TreeNode*> myQueue;
        myQueue.push(root);

        // initialize count of the current level to 1, temporary count to 0
        int count = 1;
        int tempCount = 0;
        int currIndex = 0;

        // keep looping until queue is empty
        while (!myQueue.empty()) {

            // if the count is 0 then update count then reset tempCount
            // then increment the index and  add a new empty int vector
            if (count == 0) {

                count = tempCount;
                tempCount = 0;
                currIndex++;
                orderedVector.push_back(vector<int>());
            }

            // pop a node from the queue
            TreeNode* currNode = myQueue.front();
            myQueue.pop();

            // decrement the count for this level
            count--;

            // if null then go to the next one
            if (!currNode) {

                continue;
            }

            // add the value to the vector of vector
            orderedVector[currIndex].push_back(currNode->val);

            // push the chilidren to queue
            myQueue.push(currNode->left);
            myQueue.push(currNode->right);

            // increment temporary count by 2
            tempCount += 2;
        }

        // return a reversed of the ordered vector (disregard the first one
        // since it's empty from null)
        return vector<vector<int>>(++orderedVector.rbegin(),
        orderedVector.rend());
    }
};
