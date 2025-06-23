class Solution {
public:
// Find Next index on the right whose value is greater
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans(n,0);
        stack<int> st;
        st.push(heights[n-1]);
        for(int i = n-2; i>=0 ;i--){
            int ct = 0;
            while(st.size() && st.top()<=heights[i]){
                ct++;
                st.pop();
            }
            if(st.size()) ct++;
            ans[i] = ct;
            st.push(heights[i]);
        }   
        return ans;
    }
};