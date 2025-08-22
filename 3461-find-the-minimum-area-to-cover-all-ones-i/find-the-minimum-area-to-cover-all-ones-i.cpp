class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int t = n;
        int b = -1;
        int l = m;
        int r = -1;
        // For all the possibiliies of top bottom left and right 
        bool flag = false;
        for(int i =0; i<n; i++){
            for(int j = 0;j<m; j++){
                if(grid[i][j]==1){
                    flag = true;
                    t = min(i,t);
                    b = max(i,b);
                    l = min(j,l);
                    r = max(j,r);
                }
            }
        }
        if(!flag){
            return 0;
        }
        cout<<t<<' '<<b<<' '<<l<<' '<<r;
        return 1ll*(b-t+1)*(r-l+1);
    }
};