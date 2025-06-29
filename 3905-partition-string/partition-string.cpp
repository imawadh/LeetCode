class Solution {
public:
    vector<string> partitionString(string s) {
        set <string> st;
        int n = s.size();
        vector<string> v;
        string str="";
        for(int i =0; i<n; i++){
            str.push_back(s[i]);
            if(st.find(str)==st.end()){
                v.push_back(str);
                st.insert(str);
                str="";
            }
        }
        return v;

    }
};