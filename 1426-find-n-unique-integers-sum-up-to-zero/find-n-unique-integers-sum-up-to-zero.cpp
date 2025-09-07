class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector <int> ans(n);
        if(n==2) return ans = {-1,1};
        for(int i =0; i<n; i++)
        {
            ans[i]=-1*i;
        }
        n-=1;
        ans[n]=((n)*(n+1))/2-n;
        return ans;
    }
};