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
     * @return: Postorder in ArrayList which contains node values.
     */
     
    vector<int> postorder;

    void traverse(TreeNode *root) {
        if (root == NULL) {
            return;
        }
        traverse(root->left);
        traverse(root->right);
        postorder.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode *root) {
        traverse(root);
        return postorder;
    }

};