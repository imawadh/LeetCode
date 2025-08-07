class Solution {
public:
    void dfs(int sr, int sc, int r, int c, int initial_color, vector<vector<int>>& image, int color){
        if(sr<0 || sr>=r || sc<0 || sc>=c|| image[sr][sc]!=initial_color){
            return;
        }
        image[sr][sc] = color;
        // Left
        dfs(sr-1,sc,r,c,initial_color,image,color);
        // right
        dfs(sr+1,sc,r,c,initial_color,image,color);
        //up
        dfs(sr,sc-1,r,c,initial_color,image,color);
        // down
        dfs(sr,sc+1,r,c,initial_color,image,color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int r = image.size();
    int c = image[0].size();
    int initial_color = image[sr][sc];
    if(initial_color == color) return image;
    dfs(sr,sc,r,c,initial_color,image,color);
    return image;
    }
};