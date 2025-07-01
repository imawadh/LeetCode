class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int idx = 0; // Sorted Array ke elements ko track akne ke liye 

        int n =  deck.size();
        queue<int> q;
        for(int i =0; i<n; i++){
            q.push(i);
        }
        vector<int> ans(n);
        for(int i = 0; i<n; i++){
            // Index Position to put an Element of Sorted Array of idx index ...
            int idxEle = q.front();
            q.pop();

            // Index Position to skip an Element of Sorted Array of idx index ...
            int idxSkip = q.front();
            q.pop();

            // Putting sorted array ke elements ko at dwara bataye gaye index position jaha rakhna tha 
            ans[idxEle] = deck[idx];
            idx++;

            q.push(idxSkip);


        }
        return ans;
    }
};