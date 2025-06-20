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
    void reorderList(ListNode* head) {
        if(head->next == nullptr) return;
   
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* right = slow->next;
        slow->next = nullptr;
        ListNode* left = head;
        right = reverseList(right);
        

        while(right){
            
            ListNode* leftLeftNodes = left->next;
            ListNode* rightLeftNodes = right->next;

           

            left->next = right;
            left->next->next = leftLeftNodes;
            left = left->next->next;
           
            right = rightLeftNodes;  

        }
        

    }
};