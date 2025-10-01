class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numExchange<=numBottles){
            int ct = numBottles/numExchange;
            ans += ct;
            numBottles = ct + numBottles%numExchange;
        }
        return ans;
    }
};