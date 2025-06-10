class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0;
        int n = words.size();
        set<string> st;
        for(int i =0; i<n; i++){
            st.insert(words[i]);            
        }   
        for(int i =0; i<n; i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(words[i]==rev){
                continue;
            }
            if(st.find(rev)!=st.end()){
                ans++;
            }
        }   
        return ans/2;
    }
};