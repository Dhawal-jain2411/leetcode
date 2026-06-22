class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans; 
        if(nums[0]!=nums[1]) ans.push_back(nums[0]);
        if(nums[nums.size()-1]!=nums[nums.size()-2]) ans.push_back(nums[nums.size()-1]);
        for(int i = 1;i<nums.size()-1;i++){
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]) ans.push_back(nums[i]);
        }
        return ans;
    }
};