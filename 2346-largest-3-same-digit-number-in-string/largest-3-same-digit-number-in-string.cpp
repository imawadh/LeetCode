class Solution {
public:
    string largestGoodInteger(string num) {
        for(int j = 9; j>=0; j--){
            string ch = to_string(j);
            ch = ch + ch + ch;
            cout<<ch<<'\n'; 
            for(int i = 2; i<num.size(); i++){
                if(ch[2]==num[i] && ch[1]==num[i-1] && ch[0]==num[i-2]){
                    return ch;
                }
            }
        }
        return "";
    }
};