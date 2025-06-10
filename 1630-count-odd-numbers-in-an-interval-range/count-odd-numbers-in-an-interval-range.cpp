class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
       
        ans+=(high-low)/2;
        if(low&1 && high&1){
            ans++;
        }
        else if(low&1){
            ans++;
        }
        else if(high&1){
            ans++;
        }
        return ans;
        
    }
};