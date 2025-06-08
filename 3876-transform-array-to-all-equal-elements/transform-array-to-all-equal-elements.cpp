class Solution {
public:
    bool canMakeEqual(vector<int>& nums, int k) {
        vector<int> v = nums;
        int m = k;
        int n = nums.size();
        for(int i =0; i<n-1; i++){
            if(k<=0){
                break;
            }
            if(nums[i]==-1){
                nums[i]*=-1;
                nums[i+1]*=-1;
                k--;
            }

        }
        for(int i =0; i<n-1; i++){
            if(m<=0){
                break;
            }
            if(v[i]==1){
                v[i+1]*=-1;
                v[i]*=-1;
                m--;
            }
        }
        
        bool f1 = true;
        bool f2 = true;
        for(int i =0; i<n; i++){
            if(nums[i]==-1){
                f1 = false;
                break;
            }
        }
        for(int i =0; i<n; i++){
            if(v[i]==1){
                f2 = false;
                break;
            }
        }
        return f1||f2;
        
        
       
    }
};