class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDif = -1;
        int n = nums.size();
        int maxNum = nums[n-1];
        for(int i =n-2; i>=0; i--){
            if(nums[i]<maxNum){
                maxDif = max(maxDif,maxNum-nums[i]);
            }
            else{
                maxNum = nums[i];
            }
        } 
        return maxDif;
    }
};