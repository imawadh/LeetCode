class Solution {
public: 
    
    int helper(int m, int n,  int i, int j,vector<vector<int>>&dp,vector<vector<int>>& obstacleGrid){
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(i>=m || j>=n){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        if(obstacleGrid[i][j]==1) return 0;
        
        int down = helper(m,n,i+1,j,dp,obstacleGrid);
        int right = helper(m,n,i,j+1,dp,obstacleGrid);
        dp[i][j] = down+right;
        return dp[i][j];        
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n =  obstacleGrid[0].size();
        if(obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1]==1){
            return 0;
        }
        vector<vector<int>> dp(m+1,vector<int>(n,-1));
        return helper(m,n,0,0,dp,obstacleGrid);
    }
};