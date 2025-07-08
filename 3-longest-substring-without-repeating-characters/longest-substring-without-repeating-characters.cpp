class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        set<char>st;
        int ans = 1;
        queue<char> q;
        for(int i =0 ;i<s.size(); i++){
            if(st.find(s[i])!=st.end()){
                while (q.front() != s[i]) {
                    st.erase(q.front());
                    q.pop();
                }
                st.erase(q.front()); 
                q.pop();
            }
            st.insert(s[i]);
            q.push(s[i]);
            ans = max((int)q.size(),ans);
        }
        return ans;
    }
};