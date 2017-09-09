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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        
        // this will create the new root
        TreeNode* newRoot;
        
        // case when both are not null
        if (t1 && t2) {

            // create the new root by summing then recurse on left and right trees
            newRoot = new TreeNode(t1->val + t2->val);
            newRoot->left = mergeTrees(t1->left, t2->left);
            newRoot->right = mergeTrees(t1->right, t2->right);
        }
        
        // case for just t1, assign it to new root
        else if (t1) {
            
            newRoot = t1;
        }
        
        // case for just t2, assign it to new root
        else {
            
            newRoot = t2;
        }

        return newRoot;
    }
};