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
    void solve(TreeNode* root,vector<string> &ans, string str){
        if(root==nullptr) return;
        string v = to_string(root->val);
        str+=v;
        if(root->left==nullptr && root->right==nullptr){
            ans.push_back(str);

        }
        else{
            str+="->";
        }
        solve(root->left,ans,str);
        solve(root->right,ans,str);
        
        

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string str = "";
        solve(root,ans,str);
        return ans;

    }
};