class Solution {
public:
    string largestOddNumber(string num) {
        int idx = -1;
        for(int i = 0; i<num.size(); i++){
            if((num[i]-'0')&1) idx=i+1;
        }
        return idx==-1 ? "" : num.substr(0,idx);
    }
};