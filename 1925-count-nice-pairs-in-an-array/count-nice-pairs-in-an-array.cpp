class Solution {
public:
    int rev(int n){
        int r = 0;
        while(n){
            r*=10;
            r += n%10;
            n/=10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            mp[nums[i]-rev(nums[i])]++;
        }
        long long result = 0;
        int mod = 1e9 + 7;
        for(auto &it:mp){
            int num = it.second;
            result = (result + ((1ll * num * (num - 1) )/2)%mod)%mod;
        }
        return result;
    }
    
};
