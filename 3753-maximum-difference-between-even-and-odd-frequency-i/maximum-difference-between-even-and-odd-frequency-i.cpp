class Solution {
public:
    int maxDifference(string s) {
        int maxOddFreq = 0;
        int minEvenFreq = INT_MAX;
        map<int,int> mp;
        for(int i =0; i<s.size(); i++){
            mp[s[i]]++;
            
             
        }
        for(auto &it:mp){
            cout<<it.first;
            if(it.second&1){
                maxOddFreq = max(maxOddFreq,it.second);

            }
            else{
                minEvenFreq = min(minEvenFreq,it.second);
            }
        }
        return maxOddFreq-minEvenFreq;
    }
};