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
    
    // this will get all the paths given a rooth
    void getPath(TreeNode* root, string currentPath, vector<string>& myVector) {
        
        // append it to the path if not the root
        if (currentPath.length() != 0) {
            
            currentPath.append("->").append(to_string(root->val));
        }
        
        // append the root value
        else {
            
            currentPath.append(to_string(root->val));
        }
        
        // reached leaf, push to vector
        if (!root->left && !root->right) {
            
            myVector.push_back(currentPath);
            return;
        }
        
        // has left, recurse on it
        if (root->left) {
            
            getPath(root->left, currentPath, myVector);
        }
        
        // has right, recurse on it
        if (root->right) {
            
            getPath(root->right, currentPath, myVector);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        // empty root
        if (!root) {
            
            return vector<string>();
        }
        
        // this will store all the paths
        vector<string> myVector;
        
        // recursively get all paths
        getPath(root, "", myVector);
        
        return myVector;
    }
};