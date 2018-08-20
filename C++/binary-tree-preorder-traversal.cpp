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
     * @return: Preorder in ArrayList which contains node values.
     */
    
    vector<int> preorder;
    
    void traverse(TreeNode *root) {
        if (root == NULL) {
            return;
        }
        preorder.push_back(root->val);
        traverse(root->left);
        traverse(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode *root) {
        
        traverse(root);
        
        return preorder;
    }
        
};