class Solution {
public:
    int solve(vector<int>&v,int n){

        // fib(n) = fib(n-1) + fib(n-2);
        // return v[n];
        if(n<=1){
            return n;
        }

        v[n] = solve(v,n-1) + solve(v,n-2);
        return v[n];

    }

    int fib(int n) {
        if(n<=1) return n;
        vector<int> v(n+1,-1);
        v[0] = 0;
        v[1] = 1;
        solve(v,n);
        return v[n];
    }
};

