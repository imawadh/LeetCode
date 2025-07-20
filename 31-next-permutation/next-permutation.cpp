class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = n-2; i>=0; i--){
            // find the find place where nums[i]<nums[i+1] for array to be increasing 
            if(nums[i]<nums[i+1]){
                int j = i+1;
                // finding the nearest greater integer 
                while(j<n && nums[j]>nums[i]){
                    j++;
                }
                // swap and revere the aray now .... 
                swap(nums[j-1],nums[i]);
                // reverse(nums.begin()+i+1, nums.end());
                i = i+1;
                j = n-1;
                while(i<j){
                    swap(nums[i],nums[j]);
                    i++;
                    j--;
                }
                return;
            }
        }



        reverse(nums.begin(),nums.end());
    }
};