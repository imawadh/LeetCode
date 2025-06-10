class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> v(26,0);
        for(int i=0; i<s.size(); i++)
        {
            v[s[i]-97]+=1;
        }
        vector <int> v1(26,0);
        for(int i=0; i<t.size(); i++)
        {
            v1[t[i]-97]+=1;
        }
        for(int i =0; i<26; i++)
        {
            if(v[i]!=v1[i])
            {
                return false;
            }
        }
        return true;
        
    }
};