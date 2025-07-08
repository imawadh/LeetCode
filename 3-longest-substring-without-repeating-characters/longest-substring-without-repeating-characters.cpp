class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        set<char>st;
        int ans = 1;
        deque<char> dq;
        for(int i =0 ;i<s.size(); i++){
            if(st.find(s[i])!=st.end()){
                while (dq.front() != s[i]) {
                    st.erase(dq.front());
                    dq.pop_front();
                }
                st.erase(dq.front()); 
                dq.pop_front();
            }
            st.insert(s[i]);
            dq.push_back(s[i]);
            ans = max((int)dq.size(),ans);
        }
        return ans;
    }
};