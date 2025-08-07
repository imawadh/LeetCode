class Solution {
public:
    
    void dfs(vector<bool> &vis,vector<vector<int>>& rooms, int curr){
        
        if(vis[curr]==false){
            vis[curr]=true;
            for(auto it: rooms[curr]){
                dfs(vis,rooms,it);
            }
        }

    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n,false);
        

        dfs(vis,rooms,0);

        for(auto it:vis){
            if(!it) return false;
        }
        return true;

        
    }
};