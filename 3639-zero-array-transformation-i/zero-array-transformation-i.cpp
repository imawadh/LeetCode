class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> v(n+1,0);

        for(int i = 0; i<queries.size(); i++){
            int fst = queries[i][0];
            int sec = queries[i][1];
            v[fst]-=1;
            v[sec+1]+=1;

        }
        int curr = 0;
        for(int i =0; i<n; i++){
            curr+=v[i];
            nums[i]+=curr;
            if(nums[i]>0) return false;
        }
        return true;

    }
};