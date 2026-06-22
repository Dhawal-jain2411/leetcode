class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto a : nums){
            count[a]++;
        }
        int ans;
        for (const auto& pair : count) {
            if (pair.second == 1) {
            ans=pair.first ;
            }
        }
        return ans;
    }
};