class Solution {
    bool validity(vector<int>& weights, int days, int mid) {
        int count = 1;
        int sum = 0;
        for (int a : weights) {
            if (sum + a > mid) {
                count++;
                sum = a;
            } else {
                sum += a;
            }
        }
        return count <= days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxVal = 0;
        int sumVal = 0;
        for (int a : weights) {
            maxVal = max(maxVal, a);
            sumVal += a;
        }

        int st = maxVal;
        int end = sumVal;
        int ans = sumVal;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (validity(weights, days, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};