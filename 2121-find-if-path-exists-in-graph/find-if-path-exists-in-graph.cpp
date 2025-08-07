class Solution {
public:
    bool dfs(vector<vector<int>>&adj, int curr, int des,vector<bool>&visited){
        
        if(curr==des) return true;

        visited[curr] = true;
        for(auto  it: adj[curr]){
            if(visited[it]==false) {
                bool res = dfs(adj,it,des,visited);
                if(res) return true;
            }
        }
        // visited[curr] = false;
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n,vector<int>());
        for(int i =0; i<edges.size(); i++){
            int src = edges[i][0];
            int des = edges[i][1];
            adj[src].push_back(des);
            adj[des].push_back(src);
        }

        // for(int i = 0; i<n; i++){
        //     cout<<i<<" : ";
        //     for(auto it:adj[i]){
        //         cout<<it<<' ';
        //     }
        //     cout<<"\n";
        // }

        vector<bool> visited(n,false);
        return dfs(adj,source,destination,visited);
    }
};