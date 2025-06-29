class Solution {

public:
    const long long Mod = 1e9 + 7;
    long long power(int pow){
        if(pow<0) return 0;
        if(pow==0) return 1;
        long long res = power(pow/2);
        res = (res * res) % Mod;
        if(pow & 1) {
            res = (res * 2) % Mod;
        }
        return res;
    }
    int maxIndex(int st, vector<int>&nums,int target){
            int ed = nums.size()-1;
            int res = st-1;
            target = target - nums[st];
            while(st<=ed){
                int mid = (ed-st)/2 + st;
                if(nums[mid]<=target){
                    res = mid;
                    st = mid+1;
                } 
                else{
                    ed = mid-1;
                }
            } 
            return res;

    }
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        long long ans = 0;
        for(int i = 0; i<nums.size(); i++){
            // Applying binary Search to get the index in log N time 
            int pow = maxIndex(i,nums,target);
            if(pow>=0){
                long long val = power(pow-i);
                 ans = (ans + val) % Mod;
            }

        }
        return (int)ans;
    }
};