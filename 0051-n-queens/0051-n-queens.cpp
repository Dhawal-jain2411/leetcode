class Solution {
public:
    bool issafe(vector<string>& board, int row, int col,
                vector<vector<string>> &result) {
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
    void nqueens(vector<string>& board, int row, int n,
                 vector<vector<string>> &result) {
        if (row == n) {
            result.push_back(board);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (issafe(board, row, i, result)) {
                board[row][i] = 'Q';
                nqueens(board, row + 1, n, result);
                board[row][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> result;
        nqueens(board, 0, n, result);
        return result;
    }
};