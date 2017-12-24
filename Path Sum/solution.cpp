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

        // if null then return false
        if (!root) {

            return false;
        }

        // get the difference for check and recursion
        int diff = sum - root->val;

        // leaf node case
        if (!root->left && !root->right) {

            // return true if diff is 0, otherwise false
            return !diff;
        }

        // check the path on left and right
        return hasPathSum(root->left, diff) || hasPathSum(root->right, diff);
    }
};
