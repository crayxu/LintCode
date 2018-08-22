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
     * @param root: the root of tree
     * @return: the max node
     */
     
    TreeNode * maxNode(TreeNode * root) {
        
        if (root  == NULL) {
            return NULL;
        }
        
        TreeNode* max = root;
        
        if(root->left != NULL) {
            TreeNode* left = maxNode(root->left);
            max = max->val > left->val? max : left;
        }
        
        if(root->right != NULL) {
            TreeNode* right = maxNode(root->right);
            max = max->val > right->val? max : right;
        }
        return max;
    }
    
    
};