class Solution {
public:
    vector<bool> visited;

    void fun(vector<bool> &visited,vector<vector<int>>& rooms){
        queue<int> q;
        q.push(0);
        while(q.size()){
            int n = q.size();
            int current =  q.front();
            visited[current] = true;
            q.pop();
            for(int i = 0; i<n; i++){
                int rk = rooms[current].size();
                for(int j = 0; j<rk; j++){
                    if(!visited[rooms[current][j]]){
                        visited[rooms[current][j]] = true;
                        q.push(rooms[current][j]);
                    }
                }
            }
        }


    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        visited.clear();
        int n = rooms.size();
        visited.resize(n+4, false);

        fun(visited,rooms);

        for(int i = 0; i<n; i++){
            if(!visited[i]){
                return false;
            }
        }   
        return true;
    }
};