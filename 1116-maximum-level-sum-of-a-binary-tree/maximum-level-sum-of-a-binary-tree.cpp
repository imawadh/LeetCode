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
    int ans = 1;
    void level(TreeNode* root,queue<TreeNode*> q){
        int l = 1;
        int mxSum = INT_MIN;
        while(q.size()){
            int sum = 0;
            int n = q.size();
            for(int i = 0; i<n; i++){
                TreeNode* node = q.front();
                sum+=node->val;
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }
                q.pop();
            }
            if(sum>mxSum){
                mxSum = sum;
                ans = l;
            }
            l++;
        }
    }
    int maxLevelSum(TreeNode* root) {
        ans = 1;
        queue<TreeNode*> q;
        q.push(root);
        level(root,q);
        return ans;
    }
};