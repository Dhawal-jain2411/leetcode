class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        if (n < 4) return ans;

        sort(nums.begin(), nums.end());

        for (int k = 0; k < n - 3; k++) {
            if (k > 0 && nums[k] == nums[k - 1]) continue;

            for (int i = k + 1; i < n - 2; i++) {
                if (i > k + 1 && nums[i] == nums[i - 1]) continue;

                int st = i + 1, end = n - 1;

                while (st < end) {
                    long long sum = (long long)nums[k] + nums[i] + nums[st] + nums[end];

                    if (sum == target) {
                        ans.push_back({nums[k], nums[i], nums[st], nums[end]});
                        
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
        }
        return ans;
    }
};