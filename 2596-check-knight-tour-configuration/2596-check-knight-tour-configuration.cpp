class Solution {
public:
    bool check(vector<vector<int>>& grid, int row, int col, int& nr, int& nc,
               int currnum, int n) {
        
        if (row >= 1 && col >= 2) {
            if (grid[row - 1][col - 2] == currnum + 1) {
                nr = row - 1;
                nc = col - 2;
                return true;
            }
        }
        if (row >= 2 && col >= 1) {
            if (grid[row - 2][col - 1] == currnum + 1) {
                nr = row - 2;
                nc = col - 1;
                return true;
            }
        }
        if (row >= 2 && col < n - 1) {
            if (grid[row - 2][col + 1] == currnum + 1) {
                nr = row - 2;
                nc = col + 1;
                return true;
            }
        }
        if (row >= 1 && col < n - 2) {
            if (grid[row - 1][col + 2] == currnum + 1) {
                nr = row - 1;
                nc = col + 2;
                return true;
            }
        }
        if (row < n - 1 && col < n - 2) {
            if (grid[row + 1][col + 2] == currnum + 1) {
                nr = row + 1;
                nc = col + 2;
                return true;
            }
        }
        if (row < n - 2 && col < n - 1) {
            if (grid[row + 2][col + 1] == currnum + 1) {
                nr = row + 2;
                nc = col + 1;
                return true;
            }
        }
        if (row < n - 2 && col >= 1) {
            if (grid[row + 2][col - 1] == currnum + 1) {
                nr = row + 2;
                nc = col - 1;
                return true;
            }
        }
        if (row < n - 1 && col >= 2) {
            if (grid[row + 1][col - 2] == currnum + 1) {
                nr = row + 1;
                nc = col - 2;
                return true;
            }
        }
        return false;
    }
    
    bool travel(vector<vector<int>>& grid, int row, int col, int n,
                int currnum) {
        if (currnum == n * n - 1)
            return true;
            
        int nr = -1, nc = -1;
        
        if (check(grid, row, col, nr, nc, currnum, n)) {
            if (travel(grid, nr, nc, n, currnum + 1)) {
                return true;
            }
            return false; 
        } else {
            return false;
        }
    }
    
    bool checkValidGrid(vector<vector<int>>& grid) {
        if (grid[0][0] != 0) return false;
        
        int n = grid.size();
        
        return travel(grid, 0, 0, n, 0);
    }
};