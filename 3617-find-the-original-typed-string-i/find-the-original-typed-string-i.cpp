class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        int ans = 1;
        int ct = 0;
        for(int i =1; i<n; i++){
            if(word[i]==word[i-1]){
                ct++;
            }else{
                ans+=ct;
                ct = 0;
            }
        }
        ans+=ct;
        return ans;
    }
};