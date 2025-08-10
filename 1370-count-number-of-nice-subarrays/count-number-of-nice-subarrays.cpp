class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans = 0;
        int ct = 0;
        int i  =0 ;
        int j = 0;
        int n = nums.size();
        while(j<n){
            if(nums[j]&1){
                ct++;
            }
            if(ct==k){
                int r = 1;
                int idx = j+1;
                while(idx<n){
                    if(!(nums[idx]&1)){
                        idx++;
                        r++;
                    }else{
                        break;
                    }
                }
                ans+=r;
                int l = 0;
                while(!(nums[i]&1)){
                    l++;
                    i++;
                }
                i++;
                ans+=l*r;
                j = idx-1;
                ct--;
            }
            j++;
            
        }     
        return ans;
    }
};