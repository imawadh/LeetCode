class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        for(int i =0; i<nums.size() && k; i++){
            if(nums[i]>0){
                break;
            }
            else{
                nums[i] *=(-1);
                k--;
            }
        }
        sort(nums.begin(),nums.end());
        long long sum = 0;
        for(int i =0; i<nums.size(); i++){
            sum+=nums[i];
        }
        if(k&1){
            sum-=(2*nums[0]);
        }
        return sum;

    }
};