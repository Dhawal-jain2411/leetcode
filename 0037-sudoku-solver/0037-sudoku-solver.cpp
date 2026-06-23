class Solution {
public:
    bool (safe(vector<vector<char>> & board, int row, int col,char i)) {
        for(int k=0;k<9;k++){
            if(board[row][k]==i || board[k][col]==i)  return false;
        }
        int sr=(row/3)*3,sc=(col/3)*3;
        for(int l =sr;l<=sr+2;l++){
            for(int m = sc;m<=sc+2;m++){
                if(board[l][m]==i)
                return false;
            }
        }
        return true;

    }
    bool sol(vector<vector<char>>& board, int row, int col) {
        if (row == 9)
            return true;
        int nextrow = row;
        int nextcol = col + 1;
        if (nextcol == 9) {
            nextrow++;
            nextcol = 0;
        }
        if (board[row][col] != '.') {
            return sol(board, nextrow, nextcol);
        }
        for (char i = '1'; i <= '9'; i++) {
            if (safe(board, row, col, i)) {
                board[row][col] = i;
                if (sol( board, nextrow, nextcol)) {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) { sol(board, 0, 0); }
};