class Solution {
public:
    const long long Mod = 1e9 + 7;

    long long power(int pow) {
        if(pow < 0) return 0;
        if(pow == 0) return 1;
        long long res = power(pow / 2);
        res = (res * res) % Mod;
        if(pow & 1) {
            res = (res * 2) % Mod;
        }
        return res;
    }

    int maxIndex(int st, vector<int>& nums, int target) {
        int left = st, right = nums.size() - 1;
        int res = st - 1;
        int adjustedTarget = target - nums[st];
        
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] <= adjustedTarget) {
                res = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return res;
    }

    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        long long ans = 0;
        for(int i = 0; i < (int)nums.size(); i++) {
            int j = maxIndex(i, nums, target);
            int pow = j - i;
            if(pow >= 0) {
                long long val = power(pow);
                ans = (ans + val) % Mod;
            }
        }
        return (int)ans;
    }
};
