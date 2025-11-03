class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int i = 0;
        int ans = 0;
        while(i<n){
            vector<int> temp;
            int j = i;
            while(j<n && colors[j]==colors[i]){
                temp.push_back(neededTime[j]);
                j++;
            }
            // temp.push_back(0);
            sort(temp.begin(),temp.end());
            for(int k = 0; k<temp.size()-1;k++){
                ans+=temp[k];
                cout<<temp[k]<<' ';
            }
            cout<<'\n';
            i = j;
        }   
        return ans;
    }
};