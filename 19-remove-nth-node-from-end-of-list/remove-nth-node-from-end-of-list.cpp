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
     int sizeOf(ListNode* temp){
        if(temp==nullptr) return 0;
        return 1+sizeOf(temp->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s = sizeOf(head);
        int f = s-n;
        if(n==s){
            head = head->next;
            return head;
        }
        ListNode* temp = head;
        for(int i = 1; i<f; i++){
            temp = temp->next;
        }
        cout<<temp->val;
        // if(temp->next!=nullptr){
            temp->next = temp->next->next;
            
        // }
        
        
        return head;
    }
};