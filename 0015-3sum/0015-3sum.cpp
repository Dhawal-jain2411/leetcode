class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) { 
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int target = -nums[i];
            int st = i + 1, end = n - 1;

            while (st < end) {
                int sum = nums[st] + nums[end];
                
                if (sum == target) {
                    ans.push_back({nums[i], nums[st], nums[end]});
                    
                    while (st < end && nums[st] == nums[st + 1]) st++;
                    while (st < end && nums[end] == nums[end - 1]) end--;
                    
                    st++;
                    end--;
                } 
                else if (sum < target) {
                    st++;
                } 
                else {
                    end--;
                }
            }
        }
        return ans;
    }
};