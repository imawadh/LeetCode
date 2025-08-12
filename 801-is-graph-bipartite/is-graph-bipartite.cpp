class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
    
        vector<char> visitedWithColor(n,'.');
        // This is for forest graph .....
        for(int i = 0; i<n; i++){
            if(visitedWithColor[i]=='.'){
                queue<int> q;
                q.push(i);

                visitedWithColor[i] = 'R';
                char color = 'R';
                // Current egde ke saare node ko color assign karna .... 
                while(q.size()){
                    int edge = q.front();
                    q.pop();
                    color = (visitedWithColor[edge]=='R') ? 'B' : 'R';
                    for(auto &it:graph[edge]){
                        if(visitedWithColor[edge] == visitedWithColor[it]){
                            return false;
                        }

                        if(visitedWithColor[it]=='.'){
                            q.push(it);
                            visitedWithColor[it] = color;
                            
                        }
                        
                    }
                   
                }
            }
        }
        return true;
          
    }
};