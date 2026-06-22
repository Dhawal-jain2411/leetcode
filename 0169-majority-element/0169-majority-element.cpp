class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,ans=0;
        for(int a:nums){
            if (freq==0){
                ans=a;
            }
            if (ans==a){
                freq++;
            }
            else
            freq--;
        }
        return ans;
    }
};