class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n  = nums.size();
        for(int i =0; i<n; i++){
            if(nums[i]<0){
                nums[i]*=-1;
            }
        }
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = n-1;
        long long ans = 0;
        while(i<j){
            ans+=(nums[j]*nums[j]);
            ans-=(nums[i]*nums[i]);
            i++;
            j--;
        }
        if(n&1) ans+=(nums[j]*nums[j]);
        return ans;
    }
};