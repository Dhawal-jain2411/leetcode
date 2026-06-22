class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long binary=n;
        if(n<0)
        {
            binary=-binary;
            x=1/x;
        }

        while(binary>0){
            if(binary%2==1){
                ans*= x;
            }
            x*=x;
            binary/=2;
        }
        return ans;

    }
};