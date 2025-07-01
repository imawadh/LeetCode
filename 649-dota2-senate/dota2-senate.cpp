class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r;
        queue<int> d;

        int n = senate.size();

        for(int i = 0; i<n; i++){
           if(senate[i]=='R'){
            r.push(i);
           }
           else{
            d.push(i);
           }
        }

        while(d.size()&& r.size()){
            if(d.front()<r.front()){
                d.push(n++);
            }else{
                r.push(n++);
            }
            d.pop();
            r.pop();
        }

        return (r.empty() ? "Dire" : "Radiant");
           
        
    }
};