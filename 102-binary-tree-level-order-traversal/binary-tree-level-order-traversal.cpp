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
private: 
    vector<vector<int>> ans;

    void helper(TreeNode* root,queue<TreeNode*> q){
        while(!q.empty()){
            
            int size = q.size();
            vector<int> v;
            for(int i = 0; i<size; i++){
                TreeNode* top = q.front();
                v.push_back(top->val);
                if(top->left!=nullptr){
                    q.push(top->left);
                }
                 if(top->right!=nullptr){
                    q.push(top->right);
                }
                q.pop();
            }
            ans.push_back(v);

        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(root);
        helper(root,q);

        return ans;
        
    }
};