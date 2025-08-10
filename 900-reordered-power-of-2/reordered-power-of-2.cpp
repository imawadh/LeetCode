class Solution {
public:
    vector<vector<int>>all_permuatations;

    void permuataion(vector<int> &v, int idx){
        if(idx==v.size()){
            if(v[0]!=0){
                all_permuatations.push_back(v);
            }
            return;
        }
        set<int> st;
        for(int i =idx; i<v.size(); i++){
            if(st.find(v[i])!=st.end()){
                continue;
            }
            st.insert(v[i]);
            swap(v[i],v[idx]);
            permuataion(v,idx+1);
            swap(v[i],v[idx]);
        }
    }

    bool reorderedPowerOf2(int n) {
        if(n<=2) return true;
        // if(!((n)&(n-1))) return true;

        vector<int> v;
        while(n){
            v.push_back(n%10);
            n/=10;
        }   
        permuataion(v,0);
        for(auto &it:all_permuatations){
            int num = 0;
            for(auto &it1:it){
                num*=10;
                num+=it1;
            }
            if(!((num)&(num-1))) return true;
        }
        return false;
    }
};