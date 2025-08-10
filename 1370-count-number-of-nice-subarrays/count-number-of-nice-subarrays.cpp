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
            // if(ct==k){
            //     int r = 1;
            //     int idx = j+1;
            //     while(idx<n && ct==k){
            //         if(!(nums[idx]&1)){
            //             idx++;
            //             r++;
            //         }else{
            //             ct--;
            //             break;
            //         }
            //     }
            //     ans+=r;
            //     int l = 0;
            //     while(!(nums[i]&1)){
            //         l++;
            //         i++;
            //     }
            //     if(l==0){
            //         i++;
            //     }
            //     ans+=l*r;
            //     j = idx-1;
            //     ct--;
            // }
            // j++;
            if (ct == k) {
                // count evens to the right
                int r = 1;
                int idx = j + 1;
                while (idx < n && (nums[idx] & 1) == 0) {
                    r++;
                    idx++;
                }

                // count evens to the left
                int l = 1;
                while ((nums[i] & 1) == 0) {
                    l++;
                    i++;
                }

                ans += l * r; // all combinations
                i++;          // move past first odd
                ct--;         // one odd removed from window
            }
            j++;
        }     
        return ans;
    }
};