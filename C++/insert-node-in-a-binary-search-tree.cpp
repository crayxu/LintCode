/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
     
    TreeNode * insertNode(TreeNode * root, TreeNode * node) {
        
        if (root == NULL) {
            root = node;
            return root;
        }
        
        if (node->val > root->val) {
            root->right = insertNode(root->right, node);        
        } else {
            root->left = insertNode(root->left, node);        
        }
        
    }
};