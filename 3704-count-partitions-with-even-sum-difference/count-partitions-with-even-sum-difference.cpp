class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ct = 0;
        int n = nums.size();
        for(int i = 1; i<n; i++){
            nums[i]+=nums[i-1];
        }
        for(int i= 1; i<n; i++){
            int l = nums[i-1];
            int r = nums[n-1]-l;
            cout<<r-l<<' ';
            if((r-l)%2==0){
                ct++;
            }
        }
        return ct;
    }
};