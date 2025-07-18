class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        bool merged = false;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        int n = intervals.size();
        for(int i = 1; i<n; i++){
            vector<int> lst = ans.back();
            int l = lst[1];
            int f = lst[0];
            if(f<=intervals[i][0] && l>=intervals[i][0]){
                ans.pop_back();
                lst[1] = max(intervals[i][1],lst[1]);
                ans.push_back(lst);
            }else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;



    }
};