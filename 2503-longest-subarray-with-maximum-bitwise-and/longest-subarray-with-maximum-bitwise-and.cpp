class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int ct = 1;
        int ans = 1;
        int mx=*max_element(nums.begin(),nums.end());
        for(int i =0; i<n; i++){
            if(nums[i]==mx){
                ct++;
            }else{
                ct = 1;
            }
            ans = max(ct,ans);
        }
        return ans-1;   
    }
};