class Solution {
public:
    set<int>st;
    void findPrimes(int s) {
        vector<bool> isPrime(s, true);
        isPrime[0] = isPrime[1] = false;
        
        for(int i = 2; i < s; i++) {
            if(isPrime[i]) {
                st.insert(i);
                for(long long j = (long long)i*i; j < s; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        for(auto it:st){
            cout<<it<<' ';
        }
    }

    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        findPrimes(n);
        long long ans = 0;
        for(int i = 0; i<n; i++){
            if(st.find(i)!=st.end()){
                ans-=nums[i];
            }else{
                ans+=nums[i];
            }
        }
        return abs(ans);
    }
};