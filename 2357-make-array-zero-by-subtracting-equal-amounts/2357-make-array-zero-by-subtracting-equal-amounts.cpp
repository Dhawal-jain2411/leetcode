class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> distinct_elements;
        for (int num : nums) {
            if (num > 0) {
                distinct_elements.insert(num);
            }
        }
        return distinct_elements.size();
    }
};