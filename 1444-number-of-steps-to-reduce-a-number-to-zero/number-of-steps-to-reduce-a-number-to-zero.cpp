class Solution {
public:
    int fun(int num){
        if(num==0){
            return 0;
        }
        if(num&1){
            return 1 + fun(num-1);
        }
        return 1 + fun(num/2);
    }
    int numberOfSteps(int num) {
        return fun(num);
    }
};