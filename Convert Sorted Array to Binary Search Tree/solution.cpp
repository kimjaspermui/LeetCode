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
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        // empty vector is empty tree
        if (nums.size() == 0) {

            return NULL;
        }

        // only 1 element, then create a tree with that element
        if (nums.size() == 1) {

            return new TreeNode(nums[0]);
        }

        // get the middle index by dividing the size by 2
        int middle = nums.size() / 2;

        // create a root node
        TreeNode* root = new TreeNode(nums[middle]);

        // create left and right vector from middle
        vector<int> leftVector(nums.begin(), nums.begin() + middle);
        vector<int> rightVector(nums.begin() + middle + 1, nums.end());

        // add left and right children from the root through recursion
        // on left and right sub vectors from middle
        root->left = sortedArrayToBST(leftVector);
        root-> right = sortedArrayToBST(rightVector);

        return root;
    }
};
