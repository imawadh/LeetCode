class Solution {
public:
    set<vector<int>> ans;
    void help(vector<int>& candidates, int target, int idx, int currSum,int n, vector<int> &v){

        if(currSum==target){
            ans.insert(v);
            return;
        }
        if(idx>=n || currSum>target){
            return;
        }
        

        v.push_back(candidates[idx]);
        help(candidates,target, idx, currSum+v.back(),n,v );
        v.pop_back();
        help(candidates,target, idx+1, currSum,n,v );


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> v;
        help(candidates,target, 0, 0, n,v);
        vector<vector<int>> an;
        for(auto &it:ans){
            an.push_back(it);
        }
        return an;
    }
};