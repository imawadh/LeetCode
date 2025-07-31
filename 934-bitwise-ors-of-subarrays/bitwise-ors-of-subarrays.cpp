class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        set<int> pre;
        set<int> st;
        int n = arr.size();
        for(int i =0; i<n; i++){
            set<int> helper;
            helper.insert(arr[i]);
            for(auto it:pre){
                helper.insert(arr[i]|it);
            }
            pre = helper;
            st.insert(pre.begin(),pre.end());
        
        }
        return st.size();
    }
};