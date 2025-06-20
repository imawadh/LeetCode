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
     ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;

        ListNode* rh = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        
        return rh; 
    }

    bool isPalindrome(ListNode* head) {
        ListNode* newList = new ListNode(0);
        ListNode* nlt = newList;

        ListNode* t = head;
        while(t){
            ListNode* nn = new ListNode(t->val);
            nlt->next =nn;
            nlt = nlt->next;
            t = t->next;
        }
        newList = newList->next;

        ListNode* rh = reverseList(newList);

        t = head;
        ListNode* rht = rh;
        while(t!=nullptr){
            if(t->val!=rht->val) return false;
            t = t->next;
            rht = rht->next;
        }
        return true;
    }
};