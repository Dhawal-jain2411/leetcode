class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //for lower bound
     int r=nums.size();
     int l=-1;
     while(r-l>1){
        int m=(r+l)/2;
        if(target>nums[m])
        l=m;
        else
        r=m;
     }
     int lb=r;
     r=nums.size();
     l=-1;

     while(r-l>1){
        int m=(r+l)/2;
        if(target<nums[m])
        r=m;
        else
        l=m;
     }
     int ub=l;
     if (lb>=nums.size()){
     lb=-1;
     ub=-1;
    }
     else if(nums[lb]!=target)
     {
        lb=-1;
        ub=-1;
     }


     vector <int> result={lb,ub};
     return result;

    }
    
};