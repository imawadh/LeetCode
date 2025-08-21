class Solution {
public:
    // log(n) / log(k) where k is some number here it is 2
    bool isPowerOfTwo(int n) {
        double num = log(n)/log(2);
        return fabs(num-round(num))<1e-10;
        
    }   
};