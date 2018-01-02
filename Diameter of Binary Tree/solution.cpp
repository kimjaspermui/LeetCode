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

private:

    // max of left + right max depth of all nodes
    int diameter = 0;

public:

    // this function will calculate the max depth of a tree
    // while calculating the diameter along the way
    int maxDepth(TreeNode* root) {

        // null return 0
        if (!root) {

            return 0;
        }

        // get the max depth on left and right
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        // update diameter if a longer path has been found
        diameter = max(diameter, left + right);

        // return the max of either left or right then plus 1 of itself
        return max(left, right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {

        // get the max depth of root while calculating
        // the diameter in the process
        maxDepth(root);
        return diameter;
    }
};
