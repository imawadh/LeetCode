class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        map<char,int>  mp;
        int ans = 1;
        int j = 0;
        for(int i =0 ;i<s.size(); i++){
            mp[s[i]]++;
            if(mp[s[i]]==1){
                ans = max(i-j+1,ans);
            }else{
                while(mp[s[i]]!=1){
                    mp[s[j]]--;
                    j++;
                }
            }
            
        }
        return ans;
    }
};