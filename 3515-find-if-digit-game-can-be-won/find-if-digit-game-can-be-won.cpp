class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        int n = nums.size();
        for(int i =0; i<n; i++){
            if(nums[i]<=9){
                sum1+=nums[i];
            }else{
                sum2+=nums[i];
            }
        }
        return !(sum1==sum2);

    }
};