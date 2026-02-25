class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> temp(32);

      
            for(int j = 0; j<arr.size(); j++){
                int n = arr[j];
                int ct = 0;
                while(n){
                    if(n&1){
                        ct++;
                    }
                    n = n>>1;
                }
                temp[ct].push_back(arr[j]);
            }
        
        vector<int> ans;
        for(int i =0; i<32; i++){
            sort(temp[i].begin(),temp[i].end());
            for(int j =0; j <temp[i].size(); j++){
                ans.push_back(temp[i][j]);
            }
        }
        return ans;
    }
};