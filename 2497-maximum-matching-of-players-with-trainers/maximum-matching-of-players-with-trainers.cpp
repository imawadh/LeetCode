class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int n = players.size();
        int j = trainers.size()-1;
        int ans = 0;
        for(int i=n-1; i>=0; i--){
            if(j<0) return ans;
            if(trainers[j]>=players[i]){
                ans++;
                j--;
            }
        }
        return ans;
    }
};