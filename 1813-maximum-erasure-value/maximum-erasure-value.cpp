class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        long long curr = 0;
        int j = 0;
        set<int> st;
        for(int i=0; i<n; i++){
            if(st.find(nums[i])==st.end()){
                st.insert(nums[i]);
                curr += nums[i];
            }else{
                while(nums[j]!=nums[i]){
                    st.erase(nums[j]);
                    curr-=nums[j];
                    j++;
                }
                // st.erase(nums[j]);
                // curr-=nums[j];
                j++;
            }
            if(curr>ans){
                ans = curr;
            }
        }
        return ans;
        
    }
};