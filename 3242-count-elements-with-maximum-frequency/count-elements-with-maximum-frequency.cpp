class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        priority_queue<int> pq;
        int n = nums.size();
        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            pq.push(mp[nums[i]]);
        }
        int num = pq.top();
        int ans = 0;
        while(pq.size() && pq.top()==num){
            pq.pop();
            ans+=num;
        }
        return ans;
    }
};