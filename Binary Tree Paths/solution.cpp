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

    // this function will fill in allPaths when it reaches leaf nodes given the
    // path built up to that point
    void getAllPaths(TreeNode* root, vector<string>& allPaths, string currString) {

        // if null then nothing to append
        if (!root) {

            return;
        }

        // construct the path up to this node
        string newPath = currString + "->" + to_string(root->val);

        // case for leaf node
        if (!(root->left) && !(root->right)) {

            allPaths.push_back(newPath);
            return;
        }

        // get paths from left and right
        getAllPaths(root->left, allPaths, newPath);
        getAllPaths(root->right, allPaths, newPath);
    }

    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> allPaths;

        // if root is valid then try to get all paths
        if (root) {

            // single node, then just store the root as string
            if (!(root->left) && !(root->right)) {

                allPaths.push_back(to_string(root->val));
            }

            // otherwise, try to get path from left and right
            else {

                getAllPaths(root->left, allPaths, to_string(root->val));
                getAllPaths(root->right, allPaths, to_string(root->val));
            }
        }

        // return all paths built
        return allPaths;
    }
};
