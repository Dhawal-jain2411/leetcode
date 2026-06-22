class NumMatrix {
private:
    vector<vector<int>> sums;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return;
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Create a (rows+1) x (cols+1) matrix to handle boundary conditions easily
        sums.assign(rows + 1, vector<int>(cols + 1, 0));

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                // Current sum = current val + top sum + left sum - diagonal overlap
                sums[i][j] = matrix[i-1][j-1] 
                           + sums[i-1][j] 
                           + sums[i][j-1] 
                           - sums[i-1][j-1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        // Use the inclusion-exclusion principle
        return sums[row2 + 1][col2 + 1] 
             - sums[row1][col2 + 1] 
             - sums[row2 + 1][col1] 
             + sums[row1][col1];
    }
};