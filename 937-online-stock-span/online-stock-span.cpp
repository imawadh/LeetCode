class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ct = 1;
        while(st.size() && st.top().first<=price){
            ct = ct + st.top().second;
            st.pop();
        }
        st.push(make_pair(price,ct));
        return ct;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */