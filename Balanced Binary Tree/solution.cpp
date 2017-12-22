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

    typedef pair<bool, int> balancedHeightPair;

    // this function is a helper to determined whether the root is a height balanced tree
    balancedHeightPair isBalancedHelper(TreeNode* root) {

        // balanced height for null node
        if (!root) {

            return make_pair(true, 0);
        }

        // get the isBalanced and height from left and right subtree
        balancedHeightPair leftBalanced = isBalancedHelper(root->left);
        balancedHeightPair rightBalanced = isBalancedHelper(root->right);

        // get the greater height between them
        int maxHeight = max(leftBalanced.second, rightBalanced.second);

        // both must be height balanced
        if (leftBalanced.first && rightBalanced.first) {

            // if balanced, then check their difference in height must be <= 1
            if (abs(leftBalanced.second - rightBalanced.second) <= 1) {

                return make_pair(true, maxHeight + 1);
            }
        }

        // not balanced height for other cases
        return make_pair(false, maxHeight + 1);
    }

    bool isBalanced(TreeNode* root) {

        return isBalancedHelper(root).first;
    }
};
