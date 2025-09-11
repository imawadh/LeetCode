class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        string vowels = "";
        for(int i =0; i<n; i++){
            if(s[i]=='a' ||s[i]=='A' ||s[i]=='e' ||s[i]=='E' ||s[i]=='i' ||s[i]=='I' ||s[i]=='o' ||s[i]=='O' ||s[i]=='u' ||s[i]=='U' ){
                vowels.push_back(s[i]);
            }
        }
        sort(vowels.begin(),vowels.end());
        int j = 0;
        for(int i =0; i<n; i++){
            if(s[i]=='a' ||s[i]=='A' ||s[i]=='e' ||s[i]=='E' ||s[i]=='i' ||s[i]=='I' ||s[i]=='o' ||s[i]=='O' ||s[i]=='u' ||s[i]=='U' ){
                s[i]=vowels[j++];
            }
        }
        return s;
    }
};