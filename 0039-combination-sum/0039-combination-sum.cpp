class Solution {
public:
    void helper(vector<int>& candidates, int target, int i,
                vector<vector<int>>& ans, vector<int>& combi) {

        if (target == 0) {
            ans.push_back(combi);
            return;
        }

        if (target < 0 || i == candidates.size()) {
            return;
        }

        combi.push_back(candidates[i]);

        helper(candidates, target - candidates[i], i, ans, combi);

        combi.pop_back();

        helper(candidates, target, i + 1, ans, combi);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combi;

        helper(candidates, target, 0, ans, combi);

        return ans;
    }
};