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
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr || head->next==nullptr) return head;
        

        ListNode* leftHead = new ListNode(INT_MIN);
        ListNode* rightHead = new ListNode(INT_MIN);

        ListNode* leftTemp = leftHead;
        ListNode* rightTemp = rightHead;

        ListNode* temp = head;
        while(temp!=nullptr){
            if(temp->val<x){
                ListNode* newNode = new ListNode(temp->val);
                leftTemp->next =newNode;
                leftTemp = leftTemp->next;
            }
            else{
                ListNode* newNode = new ListNode(temp->val);
                rightTemp->next =newNode;
                rightTemp = rightTemp->next;
            }
            temp = temp->next;
        }

        if(leftTemp==leftHead){
            return rightHead->next;
        }
        else if(rightTemp==rightHead){
            return leftHead->next;
        }

        leftHead = leftHead->next;
        rightHead = rightHead->next;
       
        rightTemp->next = nullptr;
        leftTemp->next = rightHead;

        cout<<"EXIT"<<' ';
        return leftHead;

        // rightTemp->next = nullptr;

        // // Connect left list to right list
        // leftTemp->next = rightHead->next;

        // // Return head of the new list (skip dummy node)
        // return leftHead->next;




        





    }
};