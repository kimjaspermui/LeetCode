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
    bool hasPathSum(TreeNode* root, int sum) {
        
        int currentSum = sum;
        
        // get the current sum by substracting sum by val
        if (root) {
            
            currentSum = sum - root->val;
        }
        
        else {
            
            return false;
        }
        
        // if leaf return if equal to 0
        if (!root->left && !root->right) {
            
            return currentSum == 0;
        }
        
        // initialize returns to false
        bool leftReturn = false;
        bool rightReturn = false;
        
        // left case
        if (root->left) {
            
            leftReturn = hasPathSum(root->left, currentSum);
        }
        
        // right case
        if (root->right) {
            
            rightReturn = hasPathSum(root->right, currentSum);
        }
        
        // return true if either returns is true
        return leftReturn || rightReturn;
    }
};