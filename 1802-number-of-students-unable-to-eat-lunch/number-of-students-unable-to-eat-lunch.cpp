class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue <int> st;
        stack<int> sw;
        int n = students.size();
        for(int i = 0; i<n; i++){
            st.push(students[i]);
        }
        for(int i = n-1; i>=0; i--){
            sw.push(sandwiches[i]);
        }

        while(st.size()){
            bool flag = false;
            int n = st.size();
            for(int i =0; i<n ;i++){
                if(st.front()==sw.top()){
                    sw.pop();
                    st.pop();
                    flag = true;
                }else{
                    int ele = st.front();
                    st.pop();
                    st.push(ele);
                }
            }
            if(!flag){
                return st.size();
            }
        }

        return 0;
    }
};