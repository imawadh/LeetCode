class Solution {
public:
    int helper(const string &search, string &original){
        int total = 0;
        stack<char>st;
        for(int i =0; i<original.size(); i++){
            if(st.size() && st.top()==search[0] && original[i]==search[1]){
                total++;
                st.pop();
            }else{
                st.push(original[i]);
            }
        }
        return total;

    }
    int helper(const string &search, string &original, string &remStr){
        int total = 0;
        stack<char>st;
        for(int i =0; i<original.size(); i++){
            if(st.size() && st.top()==search[0] && original[i]==search[1]){
                total++;
                st.pop();
            }else{
                st.push(original[i]);
            }
        }
        remStr.clear();
        while(st.size()){
            char ch = st.top();
            st.pop();
            remStr.push_back(ch);
        }
        reverse(remStr.begin(),remStr.end());
        return total;
    }

    int maximumGain(string s, int x, int y) {
        
        string newStr = "";
        for(int i =0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='b'){
                newStr.push_back(s[i]);
            }
        }
        // ab --> x
        // ba --> y
        int point = 0;
        string remStr="";
        if(x>y){
            point += x*helper("ab",s,remStr);
            point += y*helper("ba",remStr);
        }else{
            point += y*helper("ba",s,remStr);
            point += x*helper("ab",remStr);

        }
        return point;

       
    }
};