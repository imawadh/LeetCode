class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rowFlag = false;
        bool colFlag = false;

        int n = matrix.size();
        int m = matrix[0].size();

        // Col Flag
        for(int i =0; i<n; i++){
            if(matrix[i][0]==0){
                colFlag = true;
            }
        }

        // Row flag
        for(int i =0; i<m; i++){
            if(matrix[0][i]==0){
                rowFlag = true;
            }
        }


        for(int i = 1; i<n; i++){
            for(int j= 1; j<m; j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Row Zeroing 
        for(int i = 1; i<n; i++){
            if(matrix[i][0]==0){
                for(int j= 1; j<m; j++){
                    matrix[i][j]=0;
                }
            }
        }
        
        // Column Zeroing 
        for(int i = 1; i<m; i++){
            if(matrix[0][i]==0){
                for(int j= 1; j<n; j++){
                    matrix[j][i]=0;
                }
            }
        }

        // First row zeroing
        if(rowFlag){
            for(int i =0; i<m; i++){
                matrix[0][i]=0;
            }   
        }

        // First col zeroing
        if(colFlag){
            for(int i =0; i<n; i++){
                matrix[i][0]=0;
            }
        }




    }
};