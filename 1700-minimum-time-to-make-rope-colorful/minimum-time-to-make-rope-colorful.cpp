class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int i = 0;
        int ans = 0;

        while (i < n) {
            vector<int> temp;
            int j = i;

            // collect all times for same-color group
            while (j < n && colors[j] == colors[i]) {
                temp.push_back(neededTime[j]);
                j++;
            }

            // remove all except the largest time
            sort(temp.begin(), temp.end());
            for (int k = 0; k < (int)temp.size() - 1; k++) {
                ans += temp[k];
                // cout << temp[k] << ' '; // (debug optional)
            }
            // cout << '\n'; // (debug optional)

            i = j; // move to next group
        }

        return ans;
    }
};
