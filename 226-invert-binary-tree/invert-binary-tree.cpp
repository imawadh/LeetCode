/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void invert(TreeNode* root){
        if(root==nullptr) return;

        invert(root->left);
        invert(root->right);

        TreeNode* left = root->left;        
        TreeNode* right = root->right;     
        root->left=right;
        root->right = left;   
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};