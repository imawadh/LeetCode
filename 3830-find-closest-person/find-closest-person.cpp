class Solution {
public:
    int findClosest(int a, int b, int z) {
        if(abs(z-a)==abs(z-b)) return 0;
        if(abs(z-a)>abs(z-b))return 2;
        return 1;
    }
};