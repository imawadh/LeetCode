/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
// Code to search path from a node to other 
    void path(TreeNode* root, vector<TreeNode*> &v, TreeNode* Search){
        if(root == nullptr){
            return;
        }
        v.push_back(root);
        if(root==Search){
            return;
        }
        path(root->left,v,Search);
        if(v.back()==Search) return;
        path(root->right,v,Search);
        if(v.back()==Search) return;

        v.pop_back();
        
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q) return root;
        vector<TreeNode*> pV;
        vector<TreeNode*> qV;

        path(root,pV,p);
        path(root,qV,q);
        int i = 0;
        int n = min(qV.size(),pV.size());
        for(int i =0; i<n; i++){
            if(pV[i]!=qV[i]){
                return pV[i-1];
            }
        }
        return pV[n-1];
        // while (i < n && pV[i] == qV[i]) {
        //     i++;
        // }

        // return pV[i - 1]; 

    }
};