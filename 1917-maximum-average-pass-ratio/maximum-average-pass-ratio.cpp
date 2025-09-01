class Solution {
public:
    double gain(int pass, int total){
        return (double)(pass+1)/(total+1) - (double)pass/total;
    }

    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<int,int>>> pq;

        int n = classes.size();

        for(int i = 0; i < n; i++){
            int pass = classes[i][0];
            int total = classes[i][1];
            pq.push({gain(pass,total), {pass, total}});
        }

        while(extraStudents){
            pair<double, pair<int,int>> p= pq.top();
            pq.pop();
            int pass = p.second.first+1; 
            int total = p.second.second+1; 
            pq.push({gain(pass,total), {pass, total}});
            extraStudents--;
        }

        double ans = 0.0;
        while(pq.size()){
            pair<int,int> p = pq.top().second;
            pq.pop();
            int pass = p.first;
            int total = p.second;
            ans+=(double)pass/total;
        }
        return ans/n;



    }
};