class Solution {
public:
    vector<int> ans;
    void help(int n){
        vector<int> digits;
        while(n){
            digits.push_back(n%10);
            n = n/10;
        }
        reverse(digits.begin(),digits.end());
        for(int i = 0 ; i<digits.size(); i++){
            ans.push_back(digits[i]);
        }
    }
    vector<int> separateDigits(vector<int>& nums) {

        int n =  nums.size();
        for(int i = 0; i<n; i++){
            help(nums[i]);
        }
        return ans;
    }
};