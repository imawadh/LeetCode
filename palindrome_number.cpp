class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long long int ans = 0;
        long long int num = x;
        while(num!=0)
        {
            ans = ans*10+num%10;
            num/=10;
        }
        if(x==ans)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};