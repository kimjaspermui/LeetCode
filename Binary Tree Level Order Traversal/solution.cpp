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
    vector<vector<int>> levelOrder(TreeNode* root) {
     
        // case for empty tree
        if (!root) {
            
            return vector<vector<int>>();
        }
        
        // the output, temporary vector, and the queue intialized with the root
        vector<vector<int>> output;
        vector<int> tempVector;
        queue<TreeNode*> myQueue;
        myQueue.push(root);
        
        // count to be 1, and temp count to be 0
        int count = 1;
        int tempCount = 0;
        
        // while there is something in the queue, loop again
        while (!myQueue.empty()) {
            
            // get the next node, then record it for this level
            TreeNode* current = myQueue.front();
            myQueue.pop();
            tempVector.push_back(current->val);
            count--;
            
            // add the left and right children to queue if any
            if (current->left) {
                
                myQueue.push(current->left);
                tempCount++;
            }
            
            if (current->right) {
                
                myQueue.push(current->right);
                tempCount++;
            }
            
            // case for 0 count
            if (!count) {
                
                // get the count for next level then reset tempCount
                count = tempCount;
                tempCount = 0;
                
                // push the vector then clear it
                output.push_back(tempVector);
                tempVector.clear();
            }
        }
        
        return output;
    }
};