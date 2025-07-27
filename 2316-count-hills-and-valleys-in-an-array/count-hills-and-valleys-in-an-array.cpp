class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int left = nums[0];
        int curr = nums[1];
        int right = nums[2];
        int ans = 0;
        for(int i = 1; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                continue;
            }else{
                right = nums[i+1];
                // valley
                if(left>curr && right>curr){
                    ans++;
                }
                // moutain
                if(left<curr && right<curr){
                    ans++;
                }
                left = curr;
                curr = right;

            }
        }
        return ans;
    }
};