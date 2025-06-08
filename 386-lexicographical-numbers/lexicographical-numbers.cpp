class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        int val = 1;
        for(int i = 0; i<n; i++){
            ans.push_back(val);
            if (val * 10 <= n) {
                val *= 10;  
            } 
            else {
                if (val >= n) {
                    val /= 10; 
                }
                val++;
                while (val % 10 == 0) {
                    val /= 10;  
                }
            }
        }
        return ans;
    }
};