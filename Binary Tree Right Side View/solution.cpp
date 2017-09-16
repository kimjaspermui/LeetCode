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
    vector<int> rightSideView(TreeNode* root) {
        
        // case for empty tree
        if (!root) {
            
            return vector<int>();
        }
        
        // count initialized to 1, then temp to 0
        int count = 1;
        int tempCount = 0;
        
        // push the first element to queue
        queue<TreeNode*> myQueue;
        myQueue.push(root);
        
        // this will store the output
        vector<int> output;
        
        // loop while there is an element in the queue
        while (!myQueue.empty()) {
            
            // get the next element then decrease the count
            TreeNode* current = myQueue.front();
            myQueue.pop();
            count--;
            
            // insert children from left to right, if any
            if (current->left) {
                
                myQueue.push(current->left);
                tempCount++;
            }
            
            if (current->right) {
                
                myQueue.push(current->right);
                tempCount++;
            }
            
            // when we reached the last element of this level update count
            // then record the rightmost element then reset temp count
            if (!count) {
                
                count = tempCount;
                output.push_back(current->val);
                tempCount = 0;
            }
        }
        
        return output;
    }
};