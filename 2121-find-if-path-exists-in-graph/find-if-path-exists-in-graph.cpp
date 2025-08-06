class Solution {
public:
    bool helper(int source, int destination, vector<vector<int>>& adj,set<int>&st ){
        if(source==destination){
            return true;
        }
        st.insert(source);
        for(auto neighbour: adj[source]){
            if(st.find(neighbour)==st.end()){
                bool res = helper(neighbour,destination,adj,st);
                if(res) return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        set<int> st;
        return helper(source,destination,adj,st);

    }
};