class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Initialize with the first possible sum
        long long closestSum = (long long)nums[0] + nums[1] + nums[2];
        
        for (int i = 0; i < n - 2; ++i) {
            // Optimization: Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                
                if (currentSum == target) return currentSum; // Perfect match
                
                // Update closestSum if the current one is nearer to target
                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }
                
                // Move pointers based on sum comparison
                if (currentSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        return (int)closestSum;
    }
};