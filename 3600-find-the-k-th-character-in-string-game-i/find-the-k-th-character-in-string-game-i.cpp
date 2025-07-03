class Solution {
public:
    char kthCharacter(int k) {
        string str = "a";
        while(str.size()<k){
            string s = str;
            for(int i = 0; i<s.size(); i++){
                s[i] = s[i]+1;
            }
            str+=s;
        }
        return str[k-1];
    }
};