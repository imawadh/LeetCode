class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size(); 
        for(int i =0;i<n; i++){
            swap(boxTypes[i][0],boxTypes[i][1]);
        }
        sort(boxTypes.begin(),boxTypes.end());
        reverse(boxTypes.begin(),boxTypes.end());

        int ans = 0;
        int i = 0;

        while(truckSize && i<n){
            int nob = boxTypes[i][1];
            int ppu = boxTypes[i][0];
            if(nob<truckSize){
                ans += nob*ppu;
                truckSize-=nob;
            }else{
                ans += truckSize*ppu;
                truckSize=0;
            }
            i++;
        }
        return ans;
    }
};