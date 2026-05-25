class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool ans = false;
        int i = 0;
        int maxCurr = 0;
        for(i = 0; i<nums.size(); i++){
            if(maxCurr>=i){
                maxCurr = max(maxCurr,nums[i]+i);
            }
        }
        if(maxCurr>=nums.size()-1){
            ans = true;
        }
        return ans;

    }
};