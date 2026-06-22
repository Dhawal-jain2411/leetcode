class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int max_count = 0;
        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            if (m.find(s[right]) != m.end()) {
                left = max(left, m[s[right]] + 1);
            }
            m[s[right]] = right;
            max_count = max(max_count, right - left + 1);
        }

        return max_count;
    }
};