class Solution {
public:
    vector<vector<int>> ans;

    void permutations(vector<int> input, vector<int> output) {
        if(input.size() == 0){
            ans.push_back(output);
            return;
        }
        for(int i = 0; i < input.size(); i++){
            vector<int> newInput;
            for(int j = 0; j < input.size(); j++){
                if(j != i){  // remove only the element at index i
                    newInput.push_back(input[j]);
                }
            }
            output.push_back(input[i]);
            permutations(newInput, output);
            output.pop_back();  // backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> output;
        permutations(nums, output);
        return ans;
    }
};
