class Solution {
public:
    void allsub(vector<int>& nums, vector<int>& ans, vector<vector<int>>& solution, int i) {
        // Base case
        if (i == nums.size()) {
            solution.push_back(ans);
            return;
        }
        
        // 1. Include the current element
        ans.push_back(nums[i]);
        allsub(nums, ans, solution, i + 1);
        
        // 2. Exclude the current element (backtrack)
        ans.pop_back();
        
        // Skip all adjacent duplicates to prevent duplicate subsets
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
            i++;
        }
        
        // Move to the next unique element
        allsub(nums, ans, solution, i + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> solution;
        
        // Step 1: Sort the array to group duplicates together
        sort(nums.begin(), nums.end());
        
        allsub(nums, ans, solution, 0);
        return solution;
    }
};
