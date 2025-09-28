class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        if(n==2) return abs(nums[0]-nums[1]);
        int i = 0;
        int j = n-1;
        long long lSum = 0;
        long long rSum = 0;
        for(; i<n-1; i++){
            if(nums[i+1]>nums[i]){
                lSum += nums[i];
            }else{
                break;
            }
        }
        for(;j>0; j--){
            if(nums[j-1]>nums[j]){
                rSum += nums[j];
            }else{
                break;
            }
        }
        if(nums[i]==nums[j]&& j-i==1){
            return abs(lSum-rSum);
        }
        if(i!=j){
            return -1;
        }
        return min(abs(rSum+nums[i]-lSum),abs(lSum+nums[i]-rSum));

    }
};