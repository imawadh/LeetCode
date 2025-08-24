class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        queue<int> q;
        int n = nums.size();
        int ans = 0;
        int ct = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==0){
                ct++;
            }
            q.push(nums[i]);
            if(ct==2){
                int s = q.size();
                ans = max(ans,s-2);
                while(ct==2){
                    if(q.front()==0){
                        ct--;
                    }
                    q.pop();
                }
            }
        }
        int s = q.size();
        ans = max(ans,s-1);
        return ans;
    }
};