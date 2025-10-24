class Solution {
public:
    int minimumCost = INT_MAX;
    int minCost(vector<int>&v, int currentCost,int idx,int n,vector<int>&dp){
        if(idx>=n){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }else{
            int onestep = minCost(v,currentCost,idx+2,n,dp);
            int twostep = minCost(v,currentCost,idx+1,n,dp);
            dp[idx] = v[idx] + min(onestep,twostep);
        }

        return dp[idx];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int currentCost = 0;
        int n = cost.size();
        vector<int> dp(n,-1);
        minimumCost = min(minCost(cost,0,0,n,dp),minCost(cost,0,1,n,dp));
        return minimumCost;
    }
};