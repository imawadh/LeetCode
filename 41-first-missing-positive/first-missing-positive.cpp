class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i<n; i++){
            while(nums[i]!=i+1){

                long long idx = (long long)nums[i]-1;
                long long val = (long long)nums[i];

                if(idx<0 || idx>=n) break;

                if(nums[idx]!=val){
                     swap(nums[i],nums[idx]);
                }
                else{
                    break;
                }
            }
        }
        for(int i=0;i<n; i++){
            if(nums[i]!=i+1) return i+1;
        }

        return n+1;
        
    }
};