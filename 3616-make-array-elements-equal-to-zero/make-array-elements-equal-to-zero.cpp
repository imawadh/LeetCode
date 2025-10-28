class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        vector<int> v = nums;
        int n = v.size();
        for(int i = 1; i<n; i++){
            v[i]+=v[i-1];
        }
        int total = v[n-1];
        int ans = 0;
        for(int i = 0; i<n;i++){
            if(nums[i]==0){
                int left = v[i];
                int right = total-left;
                if(left==right){
                    ans+=2;
                }
                if(abs(left-right)==1){
                    ans+=1;
                }
            }
        }

        return ans;

    }
};