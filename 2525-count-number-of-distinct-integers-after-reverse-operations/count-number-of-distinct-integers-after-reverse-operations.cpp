class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        for(int i =0; i<n; i++){
            int num = nums[i];
            int rev = 0;
            st.insert(num);
            while(num){
                rev = rev*10 + num%10;
                num/=10;
            }
            st.insert(rev);
        }
        return st.size();
    }
};