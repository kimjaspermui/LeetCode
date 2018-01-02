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

    // this function return the sum of all values from this node
    // meanwhile, it will update current node with new value
    // that is the sume of all values greater than current
    // preSum is the sum from the parent
    int convertHelper(TreeNode* root, int preSum) {

        // if null the just return 0
        if (!root) {

            return 0;
        }

        // get sum from the right then get a new value
        int right = convertHelper(root->right, preSum);
        int newVal = root->val + right + preSum;

        // update the value
        root->val = newVal;

        // get the sum from left and update its value
        int left = convertHelper(root->left, newVal);

        // get the sum from left and right plus current values
        return left + newVal - preSum;
    }

    TreeNode* convertBST(TreeNode* root) {

        // call the helper then return updated root
        convertHelper(root, 0);
        return root;
    }
};
