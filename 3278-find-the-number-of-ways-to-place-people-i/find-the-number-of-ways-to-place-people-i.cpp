class Solution {
public:
    int ct = 0;
    void helper(vector<vector<int>>& points, int i, int j){
        int x1 = points[i][0];
        int y1 = points[i][1];
        int x2 = points[j][0];
        int y2 = points[j][1];
        int n = points.size();
        int  flag = 0;
        for(int i = 0; i<n; i++){
            int x3 = points[i][0];
            int y3 = points[i][1];
            if(x1>=x3 && x3>=x2 && y2>=y3 && y3>=y1){
                flag++;
            }
        }
        if(flag==2){
            ct++;
        }
    }
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        for(int i = 0; i<n; i++){
            int x1 = points[i][0];
            int y1 = points[i][1];
            for(int j = 0; j<n; j++){
                int x2 = points[j][0];
                int y2 = points[j][1];
                if(x1>=x2 && y2>=y1){
                    helper(points,i,j);
                }
            }
        }
        return ct;
    }
};