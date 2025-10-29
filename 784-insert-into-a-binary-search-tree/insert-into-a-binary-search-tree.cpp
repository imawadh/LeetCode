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
    TreeNode* parent = nullptr;

    TreeNode* serchParent(TreeNode* root, int val){
        if(root==nullptr){
            return parent;
        }

        parent = root;
        if(root->val<val){
            return serchParent(root->right,val);
        }

        return serchParent(root->left,val);
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr) return new TreeNode(val);
        parent = nullptr;
        TreeNode * p = serchParent(root,val);
        if(p->val<val){
            p->right = new TreeNode(val);
        }else{
            p->left = new TreeNode(val);
        }
        return root;
    }
};