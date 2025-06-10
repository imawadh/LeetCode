class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        map<int,int> mp;
        vector<int> ans;
        for(int i =0; i<n; i++){
            mp[digits[i]]++;
        }
        for(int i =100; i<=999; i+=2){
            int num = i;
            map<int,int> mp2;
            while(num!=0){
                mp2[num%10]++;
                num/=10;
            }
            bool flag = true;
            for(auto it:mp2){
                int key = it.first;
                int val = it.second;
                if(mp[key]<val){
                    flag = false;
                }
            }
            if (flag){
                ans.push_back(i);
            }
        }
        return ans;
    }
};