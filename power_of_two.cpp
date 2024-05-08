class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x = 0;
        while(pow(2,x)<n)
        {
            x++;

        }
        if(pow(2,x)==n){
            return true;
        }
        else{
            return false;
        }
    }
};