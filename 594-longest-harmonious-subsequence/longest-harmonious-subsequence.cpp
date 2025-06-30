class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i =0; i<n; i++){
           mp[nums[i]]++;
        }   
        int ans = 0;
        for(auto it:mp){
            int key = it.first;
            int val = it.second;
            if(mp.find(key+1)!=mp.end()){
                ans = max(ans,val+mp[key+1]);
            }
        }
        return ans;
    }
};