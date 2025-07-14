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
    int size(ListNode* head){
        if(head==nullptr){
            return 0;
        }
        return 1 + size(head->next);
    }
    int getDecimalValue(ListNode* head) {
        int s = size(head)-1;
        int ans = 0;
        while(head!=nullptr){
            ans = ans + (head->val<<s);
            //cout<<ans<<' ';
            s-=1;
            head = head->next;
        }
        return ans;
    }
};