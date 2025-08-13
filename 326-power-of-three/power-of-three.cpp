class Solution {
public:
    bool isPowerOfThree(int n) {
        int x = 0;
        while(pow(3,x)<n)
        {
            x++;
        }
        if(pow(3,x)==n)
        {
            return true;
        }
        else{
            return false;
        }
    }
};