class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = nums[i] + nums[j];
                int currTrinagleCount = upper_bound(nums.begin() + j + 1, nums.end(), sum - 1) - (nums.begin() + j + 1);
                ans += currTrinagleCount;
            }
        }
        return ans;
    }
};
