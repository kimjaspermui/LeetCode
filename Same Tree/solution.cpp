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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // edge case, both are null, return true
        if (!p && !q) {

            return true;
        }

        // if one is null, then return false
        if (!p || !q) {

            return false;
        }

        // if values not equal then return false
        if (p->val != q->val) {

            return false;
        }

        // recursion, both left and right must be true
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
