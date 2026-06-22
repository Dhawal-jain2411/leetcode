class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> ans;
        int lsum=0;
        for(int i =0;i<nums.size();i++){
            leftsum.push_back(lsum);
            lsum+=nums[i];
        }
         for(int i =0;i<nums.size()-1;i++){
            rightsum.push_back(lsum-leftsum[i+1]);
        }
        rightsum.push_back(0);
        for(int i =0;i<nums.size();i++){
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return ans;
    }
};