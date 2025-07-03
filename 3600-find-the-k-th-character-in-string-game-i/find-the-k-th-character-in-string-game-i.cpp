class Solution {
public:
    char kthCharacter(int k) {
        /* At most
        A se k tak hi ke saare charcaters possible hai kewal ...
        1 a
        2 b
        4 c
        5 d
        8 e
        16 f
        32 g
        64 h
        128 i
        256 j 
        512 k
        */ 
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