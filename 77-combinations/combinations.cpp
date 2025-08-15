class Solution {
public:
     vector<vector<int>>  ans;
    void helper(int n, int k, int cN, vector<int>&v){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
        for(int i =cN ; i<=n; i++){
            v.push_back(i);
            helper(n,k,i+1,v);
            v.pop_back();
        }
       
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        helper(n,k,1,v);
        return ans;
    }
};