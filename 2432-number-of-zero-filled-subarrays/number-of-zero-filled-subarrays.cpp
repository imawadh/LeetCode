class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        int ct = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0){
                ct++;
            }else{
                ans = ans + (1ll * ct * (ct+1)) /2;
                ct = 0;
            }
        }
        ans = ans + (1ll * ct * (ct+1)) /2;
        return ans;
    }
};