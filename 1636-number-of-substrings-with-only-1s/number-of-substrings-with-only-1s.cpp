class Solution {
public:
    int numSub(string s) {
        const int MOD = 1000000007;
        long long ans = 0;
        long long ct = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                ct++;
            } else {
                ans = (ans + (ct * (ct + 1) / 2) % MOD) % MOD;
                ct = 0;
            }
        }

        // Handle last segment
        ans = (ans + (ct * (ct + 1) / 2) % MOD) % MOD;

        return ans;
    }
};
