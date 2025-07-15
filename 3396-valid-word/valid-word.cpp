class Solution {
public:
    bool isValid(string word) {
        bool flagSize = false;
        bool onlyAlphaNumeric = false;
        bool vowel = false;
        bool consonant = false;

        if(word.size()>=3){
            flagSize = true;
        }
        int n = word.size();
        for(int i=0; i<n; i++){
            if(word[i]>=48 && word[i]<=57){
                onlyAlphaNumeric = true;
            }
            else if(word[i]>=65 && word[i]<=90){
                onlyAlphaNumeric = true;
            }
            else if(word[i]>=97 && word[i]<=122){
                onlyAlphaNumeric = true;
            }else{
                onlyAlphaNumeric = false;
                break;
            }
        }
        string vowels = "aeiouAEIOU";
        string consnants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
        for(int i =0; i<n; i++){
            if(vowels.contains(word[i])){
                vowel = true;
            }
            if(consnants.contains(word[i])){
                consonant = true;
            }
        }
        
        return consonant && vowel && flagSize && onlyAlphaNumeric;
    }
};