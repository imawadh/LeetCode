class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        vector<pair<int, int>> numIndex;
        for (int i = 0; i < nums.size(); i++) {
            numIndex.push_back({nums[i], i});
        }
        // Sorting by value 
        sort(numIndex.begin(), numIndex.end(), greater<>());

        // Taking top k values 
        vector<pair<int, int>> topK(numIndex.begin(), numIndex.begin() + k);

        for(int i =0; i<k; i++){
            int f = topK[i].first;
            int s = topK[i].second;
            topK[i].first = s;
            topK[i].second = f;
        }

        sort(topK.begin(),topK.end());
        vector<int> ans;
        for(int i =0; i<k; i++){
            ans.push_back(topK[i].second);
        }
        return ans;

    }
};