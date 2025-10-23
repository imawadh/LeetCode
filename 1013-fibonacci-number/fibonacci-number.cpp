class Solution {
public:
    int solve(vector<int>& v, int n) {
        if (n <= 1) return n;

        // // Memoization check
        // if (v[n] != -1) return v[n];

        v[n] = solve(v, n - 1) + solve(v, n - 2);
        return v[n];
    }

    int fib(int n) {
        vector<int> v(n + 1, -1);
        return solve(v, n);
    }
};
