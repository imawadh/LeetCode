class Solution {
public:
    bool check(int a){
        while(a){
            if(a%10==0){
                return false;
            }
            a = a/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans(2,-1);
        for(int i = 1; i<n; i++){
            int a = i;
            int b = n-i;
            if(check(a) && check(b)){
                ans[0] = a;
                ans[1] = b;
                break;
            }
        }
        return ans;
    }
};