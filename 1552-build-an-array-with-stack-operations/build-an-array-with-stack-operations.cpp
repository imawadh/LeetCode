class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int st = 0;
        for(int i =0; i<target.size(); i++){
            int popCount = target[i]-st-1;
            int pushCount = popCount;
            cout<<popCount<<' '<<pushCount<<'\n';
            while(pushCount){
                pushCount--;
                v.push_back("Push");
            }
            while(popCount){
                popCount--;
                v.push_back("Pop");
            }
            v.push_back("Push");
            
            st = target[i];
        }
        
        
        return v;
    }
};