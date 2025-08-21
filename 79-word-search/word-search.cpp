class Solution {
public:
bool ans = false;
    void Check(vector<vector<char>>& board, string &word,int idx, int r, int c, int n, int m){
        if(idx==word.size()){
            ans =  true;
            return;
        };
        if(r<0 || c<0 || r>=n || c>=m  || board[r][c]!=word[idx]){
            return;
        }

        
        char ch = board[r][c];
        board[r][c] = '.';
        Check(board,word,idx+1, r+1,c,n,m);
        Check(board,word,idx+1, r-1,c,n,m);
        Check(board,word,idx+1, r,c-1,n,m);
        Check(board,word,idx+1, r,c+1,n,m);
        board[r][c] = ch;
        return;

       

    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0]) {
                    Check(board, word, 0, i, j, n, m);
                    if (ans) return true;
                }
            }
        }
        
        return ans;


    }
};