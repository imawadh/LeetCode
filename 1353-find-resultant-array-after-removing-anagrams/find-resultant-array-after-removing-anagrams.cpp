class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]); // keep first word

        for (int i = 1; i < words.size(); i++) {
            string prev = ans.back();   // last kept word
            string curr = words[i];

            string s1 = prev, s2 = curr;
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            // if current is NOT an anagram of previous, keep it
            if (s1 != s2) {
                ans.push_back(curr);
            }
        }

        return ans;
    }
};
