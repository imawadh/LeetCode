class Solution {
public:
    vector<bool> vis;
    int n;

    void dfs(vector<vector<int>>& isConnected, int node) {
        vis[node] = true;
        for (int j = 0; j < n; j++) {
            if (isConnected[node][j] == 1 && !vis[j]) {
                dfs(isConnected, j);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();
        vis.assign(n, false);
        int provinces = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                provinces++;
                dfs(isConnected, i);
            }
        }

        return provinces;
    }
};
