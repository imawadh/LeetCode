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
    int levels(TreeNode* root){
        if(root==nullptr) return 0;
        return 1 + max(levels(root->left),levels(root->right)); 
    }
    void pushElements(TreeNode* root, vector<vector<int>>&v, int curr){
        if(root==nullptr) return;
        v[curr-1].push_back(root->val);
        pushElements(root->left,v,curr+1);
        pushElements(root->right,v,curr+1);


    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int l = levels(root);
        //vector<vector<int>> v(l,vector<int>); If the inner vector 
        vector<vector<int>> v(l);
        
        pushElements(root,v,1);

        return v;
    }
};