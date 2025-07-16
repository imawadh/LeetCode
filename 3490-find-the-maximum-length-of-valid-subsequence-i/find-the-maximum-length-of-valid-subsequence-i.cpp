class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();


        // Case 1 ::  Even Even 
        int ct = 0;
        for(int i = 0; i<n; i++){
            if((nums[i]&1)==0){
                ct++;
            }
        }
        cout<<"Case 1 :: "<<ct<<'\n';
        ans =  max(ans,ct);


        // Case 2 ::  Even Odd 
        bool flag = true;
        ct = 0;
        for(int i = 0; i<n; i++){
            if(flag){
                if((nums[i]&1)==0){
                    ct++;
                    flag = false;
                }
            }else{
                if((nums[i]&1)==1){
                    ct++;
                    flag = true;
                }
            }
        }
        cout<<"Case 2 :: "<<ct<<'\n';
        ans =  max(ans,ct);


        // Case 3 ::  ODD ODD 
        ct = 0;
        for(int i = 0; i<n; i++){
            if((nums[i]&1)==1){
                ct++;
            }
        }
        cout<<"Case 3 :: "<<ct<<'\n';
        ans =  max(ans,ct);

        // Case 4 ::  ODD Even  
        ct = 0;
        flag = true;
        for(int i = 0; i<n; i++){
            if(flag){
                if((nums[i]&1)==1){
                    ct++;
                    flag = false;
                }
            }else{
                if((nums[i]&1)==0){
                    ct++;
                    flag = true;
                }
            }
        }
        cout<<"Case 4 :: "<<ct<<'\n';
        ans =  max(ans,ct);
        return ans;
    }
};