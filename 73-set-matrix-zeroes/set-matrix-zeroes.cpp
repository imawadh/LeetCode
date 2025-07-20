class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> st;
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(matrix[i][j]==0){
                    st.insert(make_pair(i,j));
                }
            }
        }

        for(auto it: st){
            int row = it.first;
            int col = it.second;

            for(int j = 0; j<m; j++){
                matrix[row][j]=0;
            }

            for(int i =0; i<n; i++){
                matrix[i][col] = 0;
            }
        }   
    }
};