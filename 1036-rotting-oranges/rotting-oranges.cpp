class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        set<pair<int,int>> st;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }else if(grid[i][j]==1){
                    st.insert({i,j});
                }
            }
        }

        // iska mtlb koi aur hai hi na jisko rotten karna hai ... 
        if(st.empty()) return 0;

        int ans = 0;
        while(q.size()){
            int n = q.size(); 
            for(int i = 0; i<n; i++){
                auto ele = q.front();
                int f = ele.first;
                int s = ele.second;
                q.pop();

                // all four direction traversal 
                if(st.find({f-1,s})!=st.end()){
                    st.erase({f-1,s});
                    q.push({f-1,s});
                }
                if(st.find({f+1,s})!=st.end()){
                    st.erase({f+1,s});
                    q.push({f+1,s});
                }
                if(st.find({f,s-1})!=st.end()){
                    st.erase({f,s-1});
                    q.push({f,s-1});
                }
                if(st.find({f,s+1})!=st.end()){
                    st.erase({f,s+1});
                    q.push({f,s+1});
                }
            }

            ans++;            

        }
        // queue is empty and set has element then return -1 --> cell can never be reached 
        if(st.size()) return -1;

        return ans-1;
    }
};