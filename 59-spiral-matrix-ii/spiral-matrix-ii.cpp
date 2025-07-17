class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int val = 0;
        int i =0;
        int j = 0;
        int r = n;
        int c = n;
        while(r>1 && c>1){
            for(int k=1;k<c; k++){
                ans[i][j]=++val;
                j++;
            }
            for(int k=1;k<r; k++){
                ans[i][j]=++val;
                i++;
            }
            for(int k=1;k<c; k++){
                ans[i][j]=++val;
                j--;
            }
            for(int k=1;k<r; k++){
                ans[i][j]=++val;
                i--;
            }
            i+=1;
            j+=1;
            r-=2;
            c-=2;
        }
        if(r==1)ans[i][j]=++val;
        return ans;
    }
};