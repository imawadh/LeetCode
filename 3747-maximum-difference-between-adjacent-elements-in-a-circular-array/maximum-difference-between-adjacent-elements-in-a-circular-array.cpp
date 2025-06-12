class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans = INT_MIN;
        int n = nums.size();
        for(int i = 1; i<n; i++){
            ans =  max(abs(nums[i]-nums[i-1]),ans);
        }
        ans =  max(abs(nums[0]-nums[n-1]),ans);

        return ans;
    }
};