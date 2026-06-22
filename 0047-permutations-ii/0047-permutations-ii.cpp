class Solution {
    void backtrack(vector<int>& nums, vector<vector<int>>& ans, vector<int>& current, vector<bool>& visited) {
        
        if (current.size() == nums.size()) {
            ans.push_back(current);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            
            if (visited[i]) continue;
            
        
            
            if (i > 0 && nums[i] == nums[i - 1] && !visited[i - 1]) continue;

            
            visited[i] = true;
            current.push_back(nums[i]);
            
            backtrack(nums, ans, current, visited);
            
            
            current.pop_back();
            visited[i] = false;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> ans;
        vector<int> current;
        vector<bool> visited(nums.size(), false);
        
        backtrack(nums, ans, current, visited);
        
        return ans;
    }
};