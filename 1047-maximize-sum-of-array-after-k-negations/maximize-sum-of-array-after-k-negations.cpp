class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) { // (klogn)
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());
        long long sum = 0;
        for(int i =0; i<nums.size(); i++){
            sum+=nums[i];
        }
        while(k){
            k--;
            int ele = pq.top();
            pq.pop();
            sum-=ele;
            pq.push(-1*ele);
            sum+=(-ele);
        }



        return sum;
    }
};