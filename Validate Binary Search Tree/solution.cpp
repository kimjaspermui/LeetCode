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
    bool isValidBST(TreeNode* root) {

        // recurse on a helper function (root itself can be extreme int, so we used long extremes to start)
        cout << LONG_MIN << endl;
        cout << LONG_MAX << endl;
        return isValidBST(root, LONG_MIN, LONG_MAX);
    }
    
    bool isValidBST(TreeNode* root, long min, long max) {
        
        // past leave, return true
        if (!root) {
            
            return true;
        }
        
        // see if the root's value is out of range, if so, return false (equal is false)
        if (min >= root->val || max <= root->val) {

            return false;
        }
        
        // recurse on both children with appropriate boudaries, must be true on both
        return isValidBST(root->left, min, root->val) && isValidBST(root->right, root->val, max);
    }
};