class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int n = s.size();
        if(n<=2){
            return s;
        }
        ans.push_back(s[0]);
        ans.push_back(s[1]);
        for(int i = 2; i<n; i++){
            if(s[i]==s[i-1] && s[i]==s[i-2]){
                continue;
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};