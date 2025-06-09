class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        int val = 1;
        for(int i = 0; i<n; i++){
            ans.push_back(val);
            // This is for moving downward 
            if (val * 10 <= n) {
                val *= 10;  
            } 
            else {
                // If value exceeds the limit 
                while(val >= n || val%10==9) {
                    val /= 10; 
                }
                val++;
                // If bring the number to its lowest form the go further 
                // while (val % 10 == 0) {
                //     val /= 10;  
                // }
            }
        }
        return ans;
    }
};