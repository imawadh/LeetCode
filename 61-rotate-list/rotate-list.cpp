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
        return 1+size(head->next);
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==nullptr || head->next==nullptr) return head;
        int s = size(head);
        k = k%s;
        if(k==0) return head;
        ListNode* temp  = head;
        for(int i = 1; i<s-k; i++){
            temp = temp->next;
        }
        ListNode* thead = temp->next;
        ListNode* tail = temp;
        while(tail->next!=nullptr){
            tail = tail->next;
        }
        tail->next = head;
        head = thead;
        temp->next = nullptr;
        return head;
    }
};