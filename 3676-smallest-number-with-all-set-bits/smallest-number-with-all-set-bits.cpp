class Solution {
public:
    int smallestNumber(int n) {
        int ct = 0;
        while(n){
            n = n>>1;
            ct++;
        }
        int ans = 1;
        while(ct){
            ans = ans<<1;
            ct--;
        }
        return ans-1;
    }
};