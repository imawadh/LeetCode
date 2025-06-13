class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> st;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                if(matrix[i][j]==0){
                    st.insert(make_pair(i,j));
                }
            }
        }
        for(auto &it: st){
            cout<<it.first<<' '<<it.second<<'\n';
            int r = it.first;
            int c = it.second;
            // Making rth row 
            for(int i = 0; i<m; i++){
                matrix[r][i] = 0;
            }
            //making cth column zero
            for(int i = 0; i<n; i++){
                matrix[i][c] = 0;
            }
        }

    }
};