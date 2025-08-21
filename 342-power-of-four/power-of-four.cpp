class Solution {
public:
    bool isPowerOfFour(int n) {
        double x = log(n)/log(4);
        return fabs(x - round(x))<1e-10;
    }
};