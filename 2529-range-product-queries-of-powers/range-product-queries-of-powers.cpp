class Solution {
public:
    const int mod = 1e9+7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> power;
        int ct  = 0;
        while(n){
            if(n&1){
                power.push_back(1<<ct);
            }
            ct++;
            n = n>>1;
        }

        vector<int> ans;
        for(int i = 0; i<queries.size(); i++){
            long long prod = 1;
            int start = queries[i][0];
            int end = queries[i][1];
            for(int j = start; j<=end; j++){
                prod*=power[j];
                prod %= mod;
            }
            ans.push_back((int)prod);
        }
        return ans;
    }
};