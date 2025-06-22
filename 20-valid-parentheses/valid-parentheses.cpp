class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        
        for(int it = 0; it<s.size(); it++){
            if(st.empty())
            {
                st.push(s[it]);
            }
            else if(st.top()=='(' && s[it]==')'){
                st.pop();
            }
            else if(st.top()=='{' && s[it]=='}'){
                st.pop();
            }
            else if(st.top()=='[' && s[it]==']'){
                st.pop();
            }
            else{
                st.push(s[it]);
            }
            
        }
        return st.empty();
        
    }
};