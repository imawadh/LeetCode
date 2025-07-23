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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        int carry = 0;
        while(t1!=nullptr && t2!=nullptr){
            int v1 = t1->val;
            int v2 = t2->val;
            int sum = v1+v2+carry;
            ListNode* t = new ListNode(sum%10);
            temp->next = t;
            temp = temp->next;
            carry = sum/10;
            t1=t1->next;
            t2=t2->next;
        }
        while(t1!=nullptr){
            int v1 = t1->val;
            int sum = v1+carry;
            ListNode* t = new ListNode(sum%10);
            temp->next = t;
            temp = temp->next;
            carry = sum/10;
            t1 = t1->next;

        }
        while(t2!=nullptr){
            int v2 = t2->val;
            int sum = v2+carry;
            ListNode* t = new ListNode(sum%10);
            temp->next = t;
            temp = temp->next;
            carry = sum/10;
            t2 = t2->next;

        }
        if(carry){
            ListNode* t = new ListNode(carry);
            temp->next = t;
        }
        head = head->next;
        return head;
    }
};