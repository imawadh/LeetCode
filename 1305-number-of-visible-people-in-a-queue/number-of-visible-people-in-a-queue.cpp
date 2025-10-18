class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        // Monotonic decresing stack
        stack<int> st;
        int n = heights.size();
        vector<int> ans(n,0);
        ans[n-1]= 0;
        st.push(heights[n-1]);
        for(int i = n-2; i>=0; i--){
            int ct = 0;
            while(st.size() && heights[i]>st.top()){
                st.pop();
                ct++;
            }
            if(st.empty()) ans[i] =ct;
            else{
                ans[i] = ct+1;
            }
            
            st.push(heights[i]);
        }
        return ans;
    }
};