class Solution {
public:
    int numberOfSpecialChars(string word) {
        int a = 65;
        int b = 97;
        int count = 0;
        
        for (int i = 0; i<26; i++)
        {
            bool flag1 = false;
            bool flag2 =  false;
            for (int j = 0; j<word.size() ; j++)
            {
                if(word[j]==a){
                    flag1 = true;
                }
                if(word[j]==b){
                    flag2 = true;
                }
            }
            if (flag1==true && flag2 == true)
            {
                count+=1;
            }
            a+=1;
            b+=1;
        }
        return count;
        
    }
};