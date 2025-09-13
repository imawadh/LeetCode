class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>v;
        map<char,int>c;
        for(int i =0; i<s.size(); i++){
            if(s[i]=='a' ||s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'){
                v[s[i]]++;
            }else{
                c[s[i]]++;
            }
        }
        int maxi = 0;
        for(auto it:v){
            maxi = max(it.second,maxi);
        }
        // cout<<maxi<<'\n';
        int ans = maxi;
        maxi=0;
        for(auto it:c){
            maxi = max(it.second,maxi);
        }
        ans+=maxi;
        return ans;

    }
};