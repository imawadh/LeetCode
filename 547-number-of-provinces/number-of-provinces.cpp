class Solution {
public:
    vector<vector<int>> adj;
    vector<bool> vis;
    int n;

    void dfs(int node) {
        vis[node] = true;
        for (int neighbor : adj[node]) {
            if (!vis[neighbor]) {
                dfs(neighbor);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();
        adj.assign(n, {});
        vis.assign(n, false);

        // ✅ Step 1: Build adjacency list from the adjacency matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }

        // ✅ Step 2: DFS to count connected components
        int provinces = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                provinces++;
                dfs(i);
            }
        }

        return provinces;
    }
};
