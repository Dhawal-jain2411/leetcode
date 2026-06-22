class Solution {
public:
     bool issafe(vector<string>& board, int row, int col) {
       
        for (int j = 0; j < row; j++) {
            if (board[j][col] == 'Q')
                return false;
        }
        for (int j = row, k = col; j >= 0 && k >= 0; j--, k--) {
            if (board[j][k] == 'Q')
                return false;
        }
        for (int j = row, k = col; j >= 0 && k <= board.size(); j--, k++) {
            if (board[j][k] == 'Q')
                return false;
        }
        return true;
    }
    void nqueens(vector<string>& board, int row, int n,int &count) {
        if (row == n) {
            count++;
            return;
        }
        for (int i = 0; i < n; i++) {
            if (issafe(board, row, i)) {
                board[row][i] = 'Q';
                nqueens(board, row + 1, n, count);
                board[row][i] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        int count=00;
        nqueens(board, 0, n, count);
        return count;
    }
};