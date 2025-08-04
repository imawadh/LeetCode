class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int> mp;
        int idx = 0;
        int n = fruits.size();
        int i = 0;
        int j = 0;
        int ans = 1;
        while(j<n){
            mp[fruits[j]]++;
            if(mp.size()>2){
                while(mp.size()>2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0){
                        mp.erase(fruits[i]);
                    }
                    i++;
                }
            }
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};