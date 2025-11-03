class Solution {
public:
    string rev(string temp){
        int i = 0;
        int n = temp.size()-1;
        while(i<n){
            swap(temp[i],temp[n]);
            i++;
            n--;
        }
        return temp;
    }
    string reverseWords(string s) {
        string temp ="";
        string ans = "";
        int n = s.size();
        int i = n-1;

        while(i>=0){

            temp = "";
            int j = i;

            // only space trimming 
            while(j>=0 && s[j]==' '){
                j--;
            }

            // only letters push 
            while(j>=0 && s[j]!=' '){
                temp.push_back(s[j]);
                j--;
            }

            // revrese and apppend to answer
            string t = rev(temp);
            for(int k =0; k<t.size(); k++){
                ans.push_back(t[k]);
            }
            ans.push_back(' ');
            i = j-1;
        }
        while(ans.back()==' '){
            ans.pop_back();
        }

        return ans;
    }
};