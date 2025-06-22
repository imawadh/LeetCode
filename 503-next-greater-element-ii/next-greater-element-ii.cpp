class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n  = nums.size();
        vector<int> ans(n,-1);
        stack<int> st; // To store index not value 
        for(int i = 2*n -1; i>=0; i--){
            int cIdx = i%n;
            while(st.size() && st.top()<=nums[cIdx]){
                st.pop();
            }
            if(st.size()){
                ans[cIdx] = st.top();
            }
            st.push(nums[cIdx]);
        }      
        return ans;
    }
};