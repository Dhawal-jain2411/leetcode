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
    int subsetXORSum(vector<int>& nums) {
        vector <int> ans;
        vector<vector<int>> solution;
        allsub(nums,ans,solution,0);

        int sum=0;
        for(int i=0;i<solution.size();i++){
            int xsum=0;
            for(int j=0;j<solution[i].size();j++){
                xsum^=solution[i][j];
            }
            sum+=xsum;
        }
        return sum;
    }
};