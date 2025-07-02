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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int d1 = p->val;
        int d2 = q->val;
        TreeNode* ans = root;
        while(ans!=NULL){
            if(ans->val>d1 && ans->val>d2){
                ans = ans->left;
            }
            else if(ans->val<d1 && ans->val<d2){
                 ans = ans->right;
            }
            else{
                break;
            }
        }

        return ans;
    }
};