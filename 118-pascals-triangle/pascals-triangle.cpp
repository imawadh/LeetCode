class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows,vector<int>(numRows));
        for(int i =0; i<numRows; i++){
            for(int j =0; j<numRows; j++){
                if(j==0){
                   v[i][j] = 1;
                }
                else if(j>i){
                    v[i][j] =  0;
                }
                else{
                    v[i][j] = v[i-1][j] + v[i-1][j-1];
                }
                
            }
        }
        vector<vector<int>> ans;
        for(int i =0; i<numRows; i++){
            vector<int> h;
            for(int j =0; j<numRows; j++){
                if(v[i][j]==0){
                    break;
                }
                else{
                    h.push_back(v[i][j]);
                }
                
            }
            ans.push_back(h);
        }
        return ans;

        
    }
};