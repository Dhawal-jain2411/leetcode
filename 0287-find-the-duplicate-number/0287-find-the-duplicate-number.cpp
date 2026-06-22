class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int f =nums[0];
        int s=nums[0];
        do {
            f=nums[nums[f]];
            s=nums[s];
        }while(s!=f);
        s=nums[0];
        while(s!=f){
            f=nums[f];
            s=nums[s];
        }
        return s;
    }
};