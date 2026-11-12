class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum=0;
        int dig_sum=0;
        for( auto a : nums){
            ele_sum += a ;
            if( a / 10 > 0 ){
                while( a > 0 ){
                    dig_sum += a % 10;
                    a /= 10;
                }
            } else dig_sum += a;
        }
        return ele_sum - dig_sum;
    }
};