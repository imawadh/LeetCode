class Solution {
public:
    bool check(int a){
        int zCount = 0;
        while(a){
            if(a%10==0){
                zCount++;
            }
            a = a/10;
        }
        if(zCount){
            return false;
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