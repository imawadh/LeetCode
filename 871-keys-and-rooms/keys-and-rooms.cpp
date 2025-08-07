class Solution {
public:
    queue<int> q;
    void dfs(vector<bool> &vis,vector<vector<int>>& rooms){
        while(q.size()){
            int top = q.front();
            q.pop();
            if(vis[top]==false){
                for(auto it:rooms[top]){
                    q.push(it);
                }
                vis[top]= true;
            }

        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n,false);
        for(auto it:rooms[0]){
            q.push(it);
        }
        vis[0] = true;

        dfs(vis,rooms);

        for(int i = 0; i<n; i++){
            if(vis[i]==false){
                return false;
            }
        }
        return true;
    }
};