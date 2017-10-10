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

        // initialized the each max
        int leftMax = INT_MIN;
        int rightMax = INT_MIN;

        // empty tree case
        if (root == nullptr) {

            return 0;
        }

        // reached leave
        if (root->left == nullptr && root->right == nullptr) {

            return 1;
        }

        // recurse on left
        if (root->left) {

            leftMax = maxDepth(root->left);
        }

        // recurse on right
        if (root->right) {

            rightMax = maxDepth(root->right);
        }

        // take the max between the two then plus 1
        return 1 + max(leftMax, rightMax);
    }
};