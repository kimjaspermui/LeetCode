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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        // loop until root's value is in between, or is equal one of the value
        while ((root->val < p->val && root->val < q->val) ||
               (root->val > p->val && root->val > q->val)) {
            
            root = root->val < p->val ? root->right : root->left;
        }
        
        return root;
    }
};