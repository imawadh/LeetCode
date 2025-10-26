class Solution {
public:
    void fun(vector<vector<int>>& image, int sr, int sc, int color){
        int oldColor = image[sr][sc];
        if(oldColor==color) return;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(q.size()){
            int n = q.size();
            for(int i = 0; i<n; i++){
                pair<int,int> p = q.front();
                q.pop();
                int r = p.first;
                int c = p.second;
                image[r][c] = color;

                if(r-1>=0 && image[r-1][c]==oldColor){
                    q.push({r-1,c});
                }
                if(r+1<image.size() && image[r+1][c]==oldColor){
                    q.push({r+1,c});
                }
                if(c-1>=0 && image[r][c-1]==oldColor){
                    q.push({r,c-1});
                }
                if(c+1<image[0].size() && image[r][c+1]==oldColor){
                    q.push({r,c+1});
                }

            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        fun(image,sr,sc,color);
        return image;
    }
};