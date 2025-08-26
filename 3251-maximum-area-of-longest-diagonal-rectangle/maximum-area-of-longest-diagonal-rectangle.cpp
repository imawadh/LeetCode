class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area = 0;
        double d = 0;
        int n = dimensions.size();
        for(int i =0;i<n; i++){
            int l = dimensions[i][0];
            int b = dimensions[i][1];

            double cd = sqrt(l*l + b*b);
            cout<<cd<<'\n';
            if(cd>d){
                d = cd;
                area = l*b;
            }else if(cd==d){
                area = max(l*b,area);

            }
        }
        return area;
    }
};