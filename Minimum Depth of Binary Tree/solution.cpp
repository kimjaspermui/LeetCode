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
    int minDepth(TreeNode* root) {

        // edge case, depth is 0 for empty tree
        if (!root) {

            return 0;
        }

        // initialize queue for BFS
        queue<TreeNode*> myQueue;
        myQueue.push(root);

        // initialized tracking variables
        int currLevel = 1;
        int count = 1;
        int tempCount = 0;

        // loop until a leaf node has been found
        while (true) {

            // go to the next level if finished at this level
            if (count == 0) {

                count = tempCount;
                tempCount = 0;
                currLevel++;
            }

            // pop one from queue
            TreeNode* currNode = myQueue.front();
            myQueue.pop();
            count--;

            // ignore null node
            if (!currNode) {

                continue;
            }

            // reached a leaf node, return the level right now
            if (!currNode->left && !currNode->right) {

                return currLevel;
            }

            // push left and right children
            myQueue.push(currNode->left);
            myQueue.push(currNode->right);
            tempCount += 2;
        }

        // won't reach here since there will be leaf node in the queue
        return 0;
    }
};
