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
    int maxDepth(TreeNode* root) {

        // if root is null then return 0 depth
        if (!root) {

            return 0;
        }

        // recurse on left and right, get the max and plus 1 to include itself
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
