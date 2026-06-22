class Solution {
public:
    void sortColors(vector<int>& nums) {
        int m=0,l=0,h=nums.size()-1;
        while (m<=h){
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                m++;
                l++;
            }else if(nums[m]==1){
                swap(nums[l],nums[m]);
                m++;
            }else {
                swap(nums[m],nums[h]);
                h--;

            }
        }
    }
};