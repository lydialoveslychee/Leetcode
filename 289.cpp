class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        if(m > 0) {
            int n = board[0].size();
            for(int i = 0; i < m; i++) 
                for(int j = 0; j < n; j++) {
                    int live = 0;
                    if(i > 0) {
                        if(int(board[i-1][j]&1) == 1) live++;
                        if(j > 0 && int(board[i-1][j-1]&1) == 1) live++;
                        if(j < n-1 && int(board[i-1][j+1]&1) == 1) live++;
                    } 
                    if(i < m-1) {
                        if(int(board[i+1][j]&1) == 1) live++;
                        if(j > 0 && int(board[i+1][j-1]&1) == 1) live++;
                        if(j < n-1 && int(board[i+1][j+1]&1) == 1) live++;
                    }
                    if(j > 0 && int(board[i][j-1]&1) == 1) live++;
                    if(j < n-1 && int(board[i][j+1]&1) == 1) live++;
                    if(board[i][j] == 0 && live == 3) board[i][j] = 2;
                    else {
                        if(board[i][j] == 1 && live >= 2 && live <= 3) board[i][j] = 3;
                    }
                }
            for(int i = 0; i < m; i++) 
                for(int j = 0; j < n; j++)
                    board[i][j] >>= 1;
        }
    }
};