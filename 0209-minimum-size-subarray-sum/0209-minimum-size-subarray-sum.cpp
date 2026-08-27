class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minimum = INT_MAX;
        int l = 0, r = 0;
        int sum = nums[0];
        while (l <= r && r < nums.size() ) {
            if (sum >= target) {
                minimum = min(minimum, r - l + 1 );
                sum -= nums[l];
                l++;
            } else {
                r++;
                if (r < nums.size()) {
                    sum += nums[r];
                }
            }
        }
        if(minimum==INT_MAX) return 0;
        else return minimum ;
    }
};