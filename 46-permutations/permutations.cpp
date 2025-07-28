class Solution {
private:
    int fact(int n){
        if(n<=1){
            return 1;
        }
        return n*fact(n-1);
    }
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        ans.push_back(nums);
        int n = nums.size();
        int tPer = fact(n);
        
        for(int k =0; k<tPer; k++){
            for(int j = n-2; j>=0; j--){
                if(nums[j]<nums[j+1]){
                    int nextIdx = j+1;
                    for(int k = j+1;k<n ;k++){
                        if(nums[k]>nums[j] && nums[k]<=nums[nextIdx]){
                            nextIdx = k;
                        }
                    }
                    swap(nums[j],nums[nextIdx]);
                    reverse(nums.begin()+j+1,nums.end());
                    ans.push_back(nums);
                    break;
                }
            }
        }
        return ans;
    }
};