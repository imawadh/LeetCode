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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* odd = head;
        ListNode* oddtemp = odd;

        ListNode* even = head->next;
        ListNode* eventemp = even;
        head = head->next->next;
        
        int ct = 1;
        while(head!=nullptr){
            if(ct&1){
                oddtemp->next = head;
                oddtemp = oddtemp->next;
                head = head->next;
            }
            else{
                eventemp->next = head;
                eventemp = eventemp->next;
                head = head->next;
            }
            // head = head->next;
            ct++;
        }
        oddtemp->next = even;
        eventemp->next = nullptr;
        return odd;


    }
};