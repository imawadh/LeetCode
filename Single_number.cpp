// # include <bits/stdc++.h>
// using namespace std;
// int main(){
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = 0;
        for (int i =0 ; i<nums.size();i++)
        {
            val = val ^ nums[i];
        }
        return val;
    }
};
