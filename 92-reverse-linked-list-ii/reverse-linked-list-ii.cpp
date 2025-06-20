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

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==nullptr ||left==right) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        head = dummy;
        ListNode* leftList = head;
        // Moving the pointer just 1 step before the start of reverse point 
        for(int i = 1; i<left; i++){
            leftList = leftList->next;
        }
        ListNode* reverseStart = leftList->next;
        // if(left==1){
        //     reverseStart = head;
        // }
        int ct = right-left;
        ListNode* reverseEnd = reverseStart;
        for(int i =1; i<=ct; i++){
            reverseEnd = reverseEnd->next;
        }

        // Preserving Right List 
        ListNode* rightList = reverseEnd->next;

        reverseEnd->next = nullptr;

        ListNode* rL = reverseList(reverseStart);
        leftList->next = rL;

        ListNode*temp = rL;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = rightList;



        return head->next;
    }
};