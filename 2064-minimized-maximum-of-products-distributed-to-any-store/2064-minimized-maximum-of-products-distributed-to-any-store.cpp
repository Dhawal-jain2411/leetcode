class Solution {
    bool valid(vector<int> &arr, int mid, int n) {
        int count = 0;
        for(int a : arr) {
            count += ((a - 1) / mid) + 1;
        }
        return count <= n;
    }

public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int st = 1;
        int end = 0;
        for (int a : quantities) {
            end = max(end, a);
        }

        int ans = end;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (valid(quantities, mid, n)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};