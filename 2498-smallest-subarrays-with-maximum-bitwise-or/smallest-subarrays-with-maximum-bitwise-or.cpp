class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        vector<int> bits(32,-1);
        for(int i = n-1; i>=0; i--){
            int farthest = i;
            for(int j = 0; j<32; j++){
                if((nums[i]>>j)&1){
                    bits[j] = i;
                }
                if(bits[j]!=-1){
                    farthest = max(farthest,bits[j]);
                }
            
            }
            ans[i] = farthest-i+1;
        }
        return ans;
    }
};