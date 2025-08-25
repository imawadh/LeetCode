class Solution {
public:
    vector<int> ans;
    bool reverseArr = false;
    void rowSolve(vector<vector<int>>& mat, int cr,int cc, int c){

        vector<int>v;
        while(cr>=0 && cc<c ){
            v.push_back(mat[cr][cc]);
            cr--;
            cc++;
        }
        if(reverseArr){
           for(int i = v.size()-1; i>=0; i--){
            ans.push_back(v[i]);
           }
        }
        else{
           for(int i = 0; i<v.size(); i++){
            ans.push_back(v[i]);
           }
        }
        reverseArr = !reverseArr;

    }
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0; i<n; i++){
            rowSolve(mat,i,0,m);
        }

        for(int j = 1; j<m; j++){
            rowSolve(mat,n-1,j,m);
        }

        return ans;
    }
};