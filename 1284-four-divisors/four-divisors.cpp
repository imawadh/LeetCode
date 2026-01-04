class Solution {
public:
    vector<int> count(int n){
        vector<int> ans;
        for(int i =2; i*i<=n; i++){
            if(n%i==0){
                ans.push_back(i);
                if(i!=n/i){
                    ans.push_back(n/i);
                }
            }
            if(ans.size()>2){
                return ans;
            }
        }
        return ans;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            vector<int> div = count(nums[i]);
            if(div.size()==2){
                sum+=1;
                sum+=nums[i];
                sum+=div[0];
                sum+=div[1];
            }
        }
        return sum;
    }
};