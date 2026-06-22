class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> counts;
        
        for (int x : nums) {
            counts[x]++;
        }
        
        for (auto const& [val, freq] : counts) {
            if (freq == 2) {
                ans ^= val;
            }
        }
        
        return ans;
    }
};