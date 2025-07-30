class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int ct = 0;
        int ans = 0;
        int mx=*max_element(nums.begin(),nums.end());
        for(int i =0; i<n; i++){
            if(nums[i]==mx){
                ct++;
            }else{
                ct = 0;
            }
            ans = max(ct,ans);
        }
        return ans;   
    }
};