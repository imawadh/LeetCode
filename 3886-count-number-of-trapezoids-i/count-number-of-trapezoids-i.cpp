class Solution {
public:
    const int MOD = 1e9 + 7;
    int countTrapezoids(vector<vector<int>>& points) {
        map<int,int> mp;// two points are said to be of same line if there y cordinates are same;
        int ct = 0; // to count whether that point can form a line or not 
        int n = points.size();
        for(int i =0; i<n; i++){
            int y = points[i][1];
            mp[y]++;
            if(mp[y]==2){
                ct++;
            }
        }

        vector<long long> v;
        long long sum = 0;
        for(auto it: mp){
            if(it.second>=2){
                long long val = (long long)it.second*(it.second-1)/2;
                v.push_back(val);
                sum+=val;
                sum = sum%MOD;
            }
        }

        long long ans = 0;
        for(int i =0; i<v.size(); i++){
            long long curr = v[i];
            long long dif = (sum - curr + MOD) %MOD;
            ans = ans  + ((long long) curr* (long long)dif)%MOD;
            ans = ans%MOD;
        }

        ans = ans * 500000004 % MOD; 
        return  (int)ans ;
        
        
    }
};