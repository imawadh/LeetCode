class Solution {
public:
    int countGaurded( vector<vector<char>>&grid, int i, int j, int m, int n){
        int ct = 0;
        // row right check
        for(int k = j+1; k<n; k++){
            if(grid[i][k]=='W' || grid[i][k]=='G') break;
            if(grid[i][k]=='.'){
                ct++;
                grid[i][k] = 'V';
            }
            
        }
        for(int k = j-1; k>=0; k--){
            if(grid[i][k]=='W' || grid[i][k]=='G') break;
            if(grid[i][k]=='.'){
                ct++;
                grid[i][k] = 'V';
            }
        }

        // column check
        for(int k = i+1; k<m; k++){
            if(grid[k][j]=='W' || grid[k][j]=='G') break;
            if(grid[k][j]=='.'){
                ct++;
                grid[k][j] = 'V';
            }
        }
        for(int k = i-1; k>=0; k--){
            if(grid[k][j]=='W' || grid[k][j]=='G') break;
            if(grid[k][j]=='.'){
                ct++;
                grid[k][j] = 'V';
            }
        }
        

        return ct;
    }

    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<char>> grid(m,vector<char>(n,'.'));
        for(auto &e:guards){
            int r = e[0];
            int c = e[1];
            grid[r][c] = 'G';
        }

        for(auto &e:walls){
            int r = e[0];
            int c = e[1];
            grid[r][c] = 'W';
        }

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                cout<<grid[i][j]<<' ';
            }
            cout<<'\n';
        }


        // answer will count number of cells in each col and row gaueded 
        int ans = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j]=='G'){
                    ans = ans + countGaurded(grid,i,j,m,n);
                }
            }
        }


        return n*m-ans-guards.size()-walls.size();

    }
};