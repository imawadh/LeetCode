class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int lastCt = 0;
        int ans = 0;
        for(int i = 0; i<n; i++){
            int currentCt = 0;
            for(int j = 0; j<bank[i].size(); j++){
                if(bank[i][j]=='1'){
                    currentCt++;
                }
            }
            ans+=currentCt*lastCt;
            if(currentCt!=0){
                lastCt = currentCt;
            }
        }
        return ans;
    }
};