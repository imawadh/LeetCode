class Solution {
public:
    int maxDifference(string s) {
        int maxOddFreq = 0;
        int maxEvenFreq = INT_MAX;
        int dif = INT_MIN;
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
                maxEvenFreq = min(maxEvenFreq,it.second);
            }
        }
        return maxOddFreq-maxEvenFreq;
    }
};