class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        int sum = 0;
        map<int,int> mp;
        for(int i=0; i<x.size(); i++){
            mp[x[i]] = max(mp[x[i]],y[i]);
        }
        if(mp.size()<3){
            return -1;
        }
        priority_queue<int> maxHeap;
        for(auto &it:mp){
            maxHeap.push(it.second);
        }
        sum+=maxHeap.top();
        maxHeap.pop();
        sum+=maxHeap.top();
        maxHeap.pop();
        sum+=maxHeap.top();
        maxHeap.pop();
        return sum;
        
    }
};