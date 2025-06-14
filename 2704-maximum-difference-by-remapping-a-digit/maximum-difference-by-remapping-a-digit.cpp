class Solution {
public:
    int minMaxDifference(int num) {
        string s1 = to_string(num);
        string s2 = to_string(num);
        
        int n = s1.size();
        int i = 0;
        // first non-9 nnumber to 9
        while(i<n){
            if(s1[i]!='9'){
                break;
            }
            i++;
        }
        char digit = s1[i];
        for(;i<n;i++){
            if(s1[i]==digit){
                s1[i] = '9';
            }
        }
        
        // First non zero number to zero

        i = 0;
        while(i<n){
            if(s2[i]!='0'){
                break;
            }
            i++;
        }
        digit = s2[i];
        for(;i<n;i++){
            if(s2[i]==digit){
                s2[i] = '0';
            }
        }
        cout<<s1<<' '<<s2;
        return stoi(s1)-stoi(s2);
    }
};