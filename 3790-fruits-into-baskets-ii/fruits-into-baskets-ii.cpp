class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    
        int n = baskets.size();
        int ct = 0;
        for(int i =0; i<n; i++){
           bool flag = false;
           for(int j =0; j<n; j++){
            if(fruits[i]<=baskets[j]){
                baskets[j] = INT_MIN;
                flag = true;
                break;
            }
           }
           if(!flag){
            ct++;
           }
        }
        return ct;
        
    }
};