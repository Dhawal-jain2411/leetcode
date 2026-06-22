class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array to minimize binary search range
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            // Partition nums1 at 'partition1', nums2 at 'partition2'
            int partition1 = (low + high) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;

            // Edge cases: if partition is 0, use -infinity; if partition is at
            // end, use +infinity
            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];

            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];

            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // We found the correct partition
                if ((m + n) % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) +
                            min(minRight1, minRight2)) /
                           2.0;
                } else {
                    return max(maxLeft1, maxLeft2);
                }
            } else if (maxLeft1 > minRight2) {
                // We are too far right in nums1, move left
                high = partition1 - 1;
            } else {
                // We are too far left in nums1, move right
                low = partition1 + 1;
            }
        }
        return 0.0;
    }
};