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

    // this function will return the sum  of this tree while updating
    // the tilt sum while at it
    int tiltTree(TreeNode* root, int& tiltSum) {

        if (!root) {

            return 0;
        }

        // get the sum on both sides
        int left = tiltTree(root->left, tiltSum);
        int right = tiltTree(root->right, tiltSum);

        // update the tiltSum at this node with the absolute difference
        // of the sums from left and right
        tiltSum += abs(left - right);

        // return the sum of this tree
        return root->val + left + right;
    }

    int findTilt(TreeNode* root) {

        // get the tiltSum of the tree
        int tiltSum = 0;
        tiltTree(root, tiltSum);

        return tiltSum;
    }
};
