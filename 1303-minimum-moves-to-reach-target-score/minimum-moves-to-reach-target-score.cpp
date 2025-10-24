class Solution {
public:
    int fun(int num, int maxDouble ){
        if(num==1){
            return 0;
        }
        if((num&1)==0 && maxDouble){
            return 1 + fun(num/2,maxDouble-1);
        }
        if(maxDouble==0){
            return num-1;
        }
        return  1 + fun(num-1, maxDouble);
    }
    int minMoves(int target, int maxDoubles) {
        return fun(target,maxDoubles);
    }
};