class Solution {
public:
    const int MOD = 1e9 + 7;


    int specialTriplets(vector<int>& nums) {
        long long ct = 0;
        unordered_map<int,int>m1;
        int n = nums.size();
        for(int i =0; i<n; i++){
            m1[nums[i]]++;
        }
        unordered_map<int,int>m2;
        m2[nums[0]]++;
        for(int i = 1; i<n-1;i++){
            int num = nums[i];
            int twice = nums[i]*2;
            int leftCount = m2[twice];
            int rightCount = m1[twice]-leftCount;
            if(num==0){
                rightCount--;
                // continue;
            }
            
            int currentPair = (int)((1LL * leftCount * rightCount) % MOD);
            ct = (ct + currentPair)%MOD;
            m2[nums[i]]++;
        }
    
        
        return ct;
        
    }
};