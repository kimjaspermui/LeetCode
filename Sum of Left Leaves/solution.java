/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {

    // this function will determine if a node is a leaf
    private boolean isLeaf(TreeNode root) {

        // not leaf for null node
        if (root == null) {

            return false;
        }

        return root.left == null && root.right == null;
    }

    public int sumOfLeftLeaves(TreeNode root) {

        // return 0 for null node
        if (root == null) {

            return 0;
        }

        // return values of left and right
        int left = 0;
        int right = 0;

        // if left is a leaf, then assign its value to left
        if (isLeaf(root.left)) {

            left = root.left.val;
        }

        // otherwise, recurse on left
        else {

            left = sumOfLeftLeaves(root.left);
        }

        // if right is not leaf, recurse on right, default 0
        if (!isLeaf(root.right)) {

            right = sumOfLeftLeaves(root.right);
        }

        // return the sum of left and right
        return left + right;
    }
}
