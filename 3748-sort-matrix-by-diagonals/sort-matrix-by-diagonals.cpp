class Solution {
public:
    void helper(vector<vector<int>>&grid){
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i<n; i++){
            vector<int> v;
            int cr = i;
            int cc = 0;
            while(cr<n && cc<m){
                v.push_back(grid[cr][cc]);
                cr++;
                cc++;
            }
            sort(v.begin(),v.end());
            reverse(v.begin(),v.end());
            cr = i;
            cc = 0;
            int ci = 0;
            while(cr<n && cc<m){
                grid[cr][cc] = v[ci];
                ci++;
                cr++;
                cc++;
            }
        }
        for(int i = 1; i<m; i++){
            vector<int> v;
            int cr = 0;
            int cc = i;
            while(cr<n && cc<m){
                v.push_back(grid[cr][cc]);
                cr++;
                cc++;
            }
            sort(v.begin(),v.end());
            cr = 0;
            cc = i;
            int ci = 0;
            while(cr<n && cc<m){
                grid[cr][cc] = v[ci];
                ci++;
                cr++;
                cc++;
            }
        }
    }
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        helper(grid);
        return grid;
    }
};