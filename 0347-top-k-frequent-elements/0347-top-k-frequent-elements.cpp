
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> counts;
        
        // 1. Count the frequency of each element
        for (int num : nums) {
            counts[num]++;
        }
        
        // 2. Create buckets where index = frequency
        // We need n + 1 size because frequency can be up to n
        vector<vector<int>> buckets(n + 1);
        for (auto const& [val, freq] : counts) {
            buckets[freq].push_back(val);
        }
        
        vector<int> result;
        // 3. Iterate backwards from the highest frequency bucket
        for (int i = n; i >= 0 && result.size() < k; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k) return result;
            }
        }
        
        return result;
    }
};