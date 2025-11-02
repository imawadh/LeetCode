class Solution {
public:
    void fill(vector<vector<int>>& image, int sr, int sc, int initialColor,int color){

        if(sr<0 || sc<0 || sc>=image[0].size() || sr>=image.size() ||  image[sr][sc] != initialColor ){
            return;
        }
        
        image[sr][sc]=color;
        
        fill(image,sr+1,sc,initialColor,color);
        fill(image,sr-1,sc,initialColor,color);
        fill(image,sr,sc-1,initialColor,color);
        fill(image,sr,sc+1,initialColor,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];
        if(initialColor == color) return image;

        fill(image,sr,sc,initialColor,color);
        return image;
    }
};