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
    bool isSymmetric(TreeNode* root) {

        // empty tree case, return true
        if (!root) {

            return true;
        }

        // this will store the current nodes we are checking
        stack<TreeNode*> myStack1;
        stack<TreeNode*> myStack2;

        // initialized stacks with left and right
        myStack1.push(root->left);
        myStack2.push(root->right);

        // keep looping until one (or both) stacks is/are empty (DFS)
        while (!myStack1.empty() || !myStack2.empty()) {

            // get the nodes of left and right trees
            TreeNode* leftTree = myStack1.top();
            TreeNode* rightTree = myStack2.top();

            // pop them off from the stacks
            myStack1.pop();
            myStack2.pop();

            // if both are null, just continue and check the next one
            if (!leftTree && !rightTree) {

                continue;
            }

            // if either is null then return false
            if (!leftTree || !rightTree) {

                return false;
            }

            // values not match, then return false
            if (leftTree->val != rightTree->val) {

                return false;
            }

            // push left and right
            myStack1.push(leftTree->left);
            myStack2.push(rightTree->right);

            // push right and left
            myStack1.push(leftTree->right);
            myStack2.push(rightTree->left);
        }

        // both must be empty
        return myStack1.empty() && myStack2.empty();
    }
};
