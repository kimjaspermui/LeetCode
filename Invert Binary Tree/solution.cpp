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
    TreeNode* invertTree(TreeNode* root) {

        // if null then retun null
        if (!root) {

            return root;
        }

        // invert left and right trees
        invertTree(root->left);
        invertTree(root->right);

        // invert left and right trees
        TreeNode* tempRight = root->right;
        root->right = root->left;
        root->left = tempRight;

        return root;
    }
};
