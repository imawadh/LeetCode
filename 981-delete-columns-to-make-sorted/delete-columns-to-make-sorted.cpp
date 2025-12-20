class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int ct = 0;

        for (int i = 0; i < m; i++) {          // column
            for (int j = 1; j < n; j++) {      // row
                if (strs[j-1][i] > strs[j][i]) {
                    ct++;
                    break;                    // delete this column
                }
            }
        }
        return ct;
    }
};
