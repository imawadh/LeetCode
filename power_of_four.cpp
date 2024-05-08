class Solution {
public:
    bool isPowerOfFour(int n) {
        int x = 0;
        while(pow(4,x)<n)
        {
            x++;
        }
        if(pow(4,x)==n)
        {
            return true;
        }
        else{
            return false;
        }
    }
};