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
private:
    ListNode* mergeTwoList(ListNode* l1, ListNode* l2 ){
        if(l1==nullptr) return l2;
        if(l2==nullptr) return l1;
        ListNode* head = new ListNode(INT_MIN); 
        ListNode* temp = head;
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val<l2->val){
                temp->next = l1;
                l1 = l1->next; 
            }
            else{
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        if(l1==nullptr){
            temp->next = l2;
        }
        else{
            temp->next = l1; 
        }
        return head->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* fHead = new ListNode(INT_MIN);
        for(int i =0;i<lists.size(); i++){
            mergeTwoList(fHead,lists[i]);
        }
        return fHead->next;
    }
};