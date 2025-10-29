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
    TreeNode* Search(TreeNode* root, int val){
        if(root==nullptr) return nullptr;
        if(root->val==val) return root;
        if(root->val<val){
            return Search(root->right,val);
        }
        return Search(root->left,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return Search(root,val);
    }
};