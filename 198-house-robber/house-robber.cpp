class Solution {
public:
    vector<int> dp;
    int ftd(vector<int>& arr, int i){
        if(i>=arr.size()){
            return 0;
        }
        
        if(dp[i]!=-1) return dp[i];

        dp[i] = max(arr[i] + ftd(arr,i+2) , 0 + ftd(arr,i+1)); 

        return dp[i];
    }
    int rob(vector<int>& nums) {
        
        dp.clear();
        dp.resize(105,-1);
        return ftd(nums,0);

    }
};