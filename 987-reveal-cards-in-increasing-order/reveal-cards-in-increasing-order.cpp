class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int idx = 0;
        int n =  deck.size();
        queue<int> q;
        for(int i =0; i<n; i++){
            q.push(i);
        }
        vector<int> ans(n);
        for(int i = 0; i<n; i++){
            int idxEle = q.front();
            q.pop();
            int idxSkip = q.front();
            q.pop();


            ans[idxEle] = deck[idx];
            idx++;

            q.push(idxSkip);


        }
        return ans;
    }
};