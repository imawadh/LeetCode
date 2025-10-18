class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i<k && i<n; i++){
            while(dq.size() && dq.front()<nums[i]){
                dq.pop_front();
            }
            while(dq.size() && dq.back()<nums[i]){
                dq.pop_back();
            }
            dq.push_back(nums[i]);
        }
        ans.push_back(dq.front());

        for(int i = k; i<n; i++){
            if(dq.front()==nums[i-k]) dq.pop_front();
        
            while(dq.size() && dq.front()<nums[i]){
                dq.pop_front();
            }
            while(dq.size() && dq.back()<nums[i]){
                dq.pop_back();
            }
            dq.push_back(nums[i]);
            ans.push_back(dq.front());
        }

        return ans;
    }

};