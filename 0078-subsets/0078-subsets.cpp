class Solution {
public:
   void allsub(vector<int> &nums, vector<int>&ans,vector<vector<int>> &solution, int i ){
        if (i==nums.size()){
           solution.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        allsub(nums,ans,solution,i+1);
        ans.pop_back();
        allsub(nums,ans,solution,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> ans;
        vector<vector<int>> solution;
        allsub(nums,ans,solution,0);
        return solution;
    }
};