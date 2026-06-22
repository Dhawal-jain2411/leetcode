class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0,m=INT_MIN;
        for(int a : nums){
            ans+=a;
              m=max(ans,m);
            if(ans<0){
                ans=0;
            }
          
        }
        return m;
    }
};