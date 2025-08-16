class Solution {
public:
    int maximum69Number (int num) {
        string n = to_string(num);
        for(int i = 0; i<n.size(); i++){
            if(n[i]=='6'){
                int place = n.size()-i-1;
                cout<<place<<' ';
                num = num + 3*pow(10,place);
                break;
            }
        }
        return num;
    }
};