class Solution {
public:
    vector<bool> ans;
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        ans.assign(n,false);
        int num = 0;
        for(int i = 0; i<n; i++){
            num = num<<1;
            cout<<num<<' ';
            num+=nums[i];
            if(num>=10){
                num =  num%5;
            }
            if(num==0 || num==5){
                ans[i]=true;
            }

        }
        return ans;
    }
};