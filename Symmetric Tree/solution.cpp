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

    // this helper function will recursively check if this tree is mirror of each other
    bool isSymmetricHelper(TreeNode* t1, TreeNode* t2) {

        // if both are null then return true
        if (!t1 && !t2) {

            return true;
        }

        // if either is null, then return false
        if (!t1 || !t2) {

            return false;
        }

        // if values not equal return false
        if (t1->val != t2->val) {

            return false;
        }

        // recurse on left and right, right and left, both must be symmetric
        return isSymmetricHelper(t1->left, t2->right) &&
        isSymmetricHelper(t1->right, t2->left);
    }

    bool isSymmetric(TreeNode* root) {

        // empty tree case, return true
        if (!root) {

            return true;
        }

        // call the helper function on left and right children
        return isSymmetricHelper(root->left, root->right);
    }
};
