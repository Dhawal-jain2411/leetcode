class Solution {
public:
   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return {};
    if (k == 1) return nums;

    vector<int> ans;
    int maxIdx = -1; 

    for (int i = 0; i <= n - k; i++) {
        int st = i;
        int end = i + k - 1;

        
        if (maxIdx < st) {
            maxIdx = st;
        
            for (int j = st + 1; j <= end; j++) {
                if (nums[j] >= nums[maxIdx]) {
                    maxIdx = j;
                }
            }
        } else {
            
            if (nums[end] >= nums[maxIdx]) {
                maxIdx = end;
            }
        }
        ans.push_back(nums[maxIdx]);
    }
    return ans;
}
};