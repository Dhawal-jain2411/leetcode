class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
         if (grid[0][0] != 0) return false;
        
        int n = grid.size();
        
         int dr[] = {-2, -2, -1, -1, 1, 1, 2, 2};
        int dc[] = {-1, 1, -2, 2, -2, 2, -1, 1};
        
        int row = 0;
        int col = 0;
        int expectedNum = 1;
        int target = n * n;
        
         while (expectedNum < target) {
            bool foundNext = false;
            
             for (int i = 0; i < 8; i++) {
                int nextRow = row + dr[i];
                int nextCol = col + dc[i];
                
                 if (nextRow >= 0 && nextRow < n && nextCol >= 0 && nextCol < n) {
                    if (grid[nextRow][nextCol] == expectedNum) {
                        row = nextRow;
                        col = nextCol;
                        expectedNum++;
                        foundNext = true;
                        break; 
                    }
                }
            }
            
             if (!foundNext) {
                return false;
            }
        }
        
        return true;
    }
};