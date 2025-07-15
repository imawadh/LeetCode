class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        int i = 0; // Currnt row
        int j = 0; // currnet columns
        int r = v.size(); // remaining rows 
        int c = v[0].size(); // remaing columns 
        vector<int> ans;               
        while(r>1 && c>1){
            for(int k = 1; k<c; k++){
                ans.push_back(v[i][j]);
                j++;   
            }
            for(int k = 1; k<r; k++){
                ans.push_back(v[i][j]);
                i++;
                
            }
            for(int k = 1; k<c; k++){
                ans.push_back(v[i][j]);
                j--;
                
            }
            for(int k = 1; k<r; k++){
                ans.push_back(v[i][j]);
                i--;
                
            }
            i+=1;
            j+=1;
            r-=2;
            c-=2;

        }
            // ans.push_back("i = "<<i <<" j = "<<j<<" r = "<<r<<" c = "<<c<<'\n';
            if(r==1){
                for(int k = 0; k<c; k++){
                    ans.push_back(v[i][j]);
                    j++;
                    
                }
            }else if(c==1){
                for(int k =0; k<r; k++){
                    ans.push_back(v[i][j]);
                    i++;
                    
                }
            }
        
        return ans;
        
    }
};