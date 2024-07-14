class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> ans;
        int i;
        for(i = 0; i<nums.size(); i++){
            if(nums[i]>=0){
                break;
            }
        }
        if(i==0)
        {
            for(i = 0; i<nums.size(); i++)
            {
                nums[i]*=nums[i];
            }
        }
        else
        {
            int j  = i-1;
            while(i<nums.size() && j>=0)
            {
                if(abs(nums[j])<nums[i])
                {
                    ans.push_back(nums[j]*nums[j]);
                    j--;
                }
                else
                {
                    ans.push_back(nums[i]*nums[i]);
                    i++;
                }
            }
            if(i==nums.size())
            {
                while(j>=0)
                {
                    ans.push_back(nums[j]*nums[j]);
                    j--;
                }
            }
            else
            {
                while(i<nums.size()){
                ans.push_back(nums[i]*nums[i]);
                i++;
                }
            }
            return ans;
        }
        return nums;
    }
};