class Solution {
public:
    int ct = 0;
    int maxOr = 0;
    void generateSubset(vector<int>&nums, vector<int>&v, int idx){
        if(idx>=nums.size()){
            int currOr = 0;
            for(int i =0; i<v.size(); i++){
                currOr|=v[i];
            }
            if(currOr==maxOr){
                ct++;
            }else if(maxOr<currOr){
                maxOr = currOr;
                ct = 1;
            }
            return;
        }
        v.push_back(nums[idx]);
        generateSubset(nums, v, idx+1);
        v.pop_back();
        generateSubset(nums, v, idx+1);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        vector<int> v;
        generateSubset(nums, v, 0);
        return ct;
    }
};