class Solution {
public:
    vector<vector<int>> res;
    void dfs(vector<vector<int>>&graph,int src, int des,vector<int>&helper, vector<bool> &visited){
        helper.push_back(src);
        if(src==des){
        res.push_back(helper);
            helper.pop_back();
            return;
        }

        visited[src] = true;
        for(auto it:graph[src]){
            if(not visited[it]){
                dfs(graph,it,des,helper,visited);
            }
        }
        helper.pop_back();
        visited[src] = false;

    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();

        vector<bool> visited(n,false);
        vector<int> helper;

        dfs(graph,0,n-1,helper,visited);
        return res;
    }
};