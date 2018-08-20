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
    /**
     * @param root: A Tree
     * @return: Inorder in ArrayList which contains node values.
     */
    
    vector<int> inorder;

    void traverse(TreeNode *root) {
        if (root == NULL) {
            return;
        }
        traverse(root->left);
        inorder.push_back(root->val);
        traverse(root->right);
    }

    vector<int> inorderTraversal(TreeNode *root) {
        traverse(root);
        return inorder;
    }
};