class Solution {
public:
    void leftSmall(vector <int> &heights,vector <int> &preS){
        stack <int> st;
        for(int i=0; i<heights.size(); i++){
           
            while(!st.empty() && heights[st.top()] >= heights[i]){ 

                st.pop();
            }
            
            if(st.empty()){
                preS[i] =-1;
            }
            else{
                preS[i] = st.top();
            }
            st.push(i);
            
        }

    }
    void rightSmall(vector <int> &heights,vector <int> &nextS){
        stack <int> st;
        for(int i=heights.size()-1; i>=0; i--){
            
         while(!st.empty() && heights[st.top()] >= heights[i]){ 

                st.pop();
            }
            
            if(st.empty()){
                nextS[i] = heights.size();
            }
            else{
                nextS[i] = st.top();
            }
            st.push(i);
            
        }

    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector <int> nextS(n);
        vector <int> preS(n);

        leftSmall(heights,preS);
        rightSmall(heights,nextS);
        cout<<"PreSmall :: ";
        for(int i = 0; i<n; i++){
            cout<<preS[i]<<' ';
        }
        cout<<"\nRightSmall :: ";
        for(int i = 0; i<n; i++){
            cout<<nextS[i]<<' ';
        }
        int area = 0;
        for(int i =0 ; i<n; i++){
            
            int width = nextS[i] - preS[i] -1;
            area = max(area,heights[i]*width);
        }
        return area;


    }
};