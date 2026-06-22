class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size() / 3;
        unordered_map<int, int> counts;

        for (int i : nums) {
            counts[i]++;
        }

        for (auto const& [val, count] : counts) {
            if (count > n) {
                ans.push_back(val);
            }
        }

        return ans;
    }
};