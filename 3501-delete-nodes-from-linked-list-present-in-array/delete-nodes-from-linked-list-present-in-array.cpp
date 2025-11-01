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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* tempHead = new ListNode(INT_MIN);
        set<int> st;
        for(int i =0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        tempHead->next = head;
        ListNode*  temp = tempHead;
        

        while(temp->next!=nullptr){
            int val = temp->next->val;
            cout<<val<<" :  ";
            if(st.find(val)!=st.end()){
                temp->next = temp->next->next;
            }else{
                temp = temp->next;
            }
        }

        return tempHead->next;
    }
};