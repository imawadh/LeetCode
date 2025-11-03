class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int o = 0;
        int c = 0;
        int idx = 0;
        int i = 0;
        string  ans = "";
        while(i<n){
            if(s[i]=='(') o++;
            else c++;
            if(o==c){
                for(int j = idx+1; j<i; j++){
                    ans.push_back(s[j]);
                }
                idx = i+1;
            }
            i++;
        }
        return ans;

    }
};