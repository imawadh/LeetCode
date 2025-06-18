/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m,vector<int>(n,-1));
        int cr = 0;
        int cc= 0;
        while(n>1 && m>1){
            for(int i = 1; i<n; i++){
              if(head==nullptr){
                    return v;
                }
                v[cr][cc] = head->val;
                head = head->next;
                cc++;
            }

            for(int i = 1; i<m; i++){
                if(head==nullptr){
                    return v;
                }
                v[cr][cc] = head->val;
                head = head->next;
                cr++;
                
            }
            for(int i = 1; i<n; i++){
                if(head==nullptr){
                    return v;
                }
                v[cr][cc] = head->val;
                head = head->next;
                cc--;
                
            }
            for(int i = 1; i<m; i++){
                if(head==nullptr){
                    return v;
                }
                v[cr][cc] = head->val;
                head = head->next;
                cr--;
            }
            cr++;
            cc++;
            m-=2;
            n-=2;
        }
        if(n==1){
            for(int i =0; i<m;i++){
                if(head==nullptr){
                    return v;
                }
                v[cr][cc] = head->val;
                head = head->next;
                cr++;
            }
        }   
        else if(m==1){
            for(int i = 0; i<n; i++){
                if(head==nullptr){
                    return v;
                }
                v[cr][cc] = head->val;
                head = head->next;
                cc++;
            }

        }
        return v;

    }
};