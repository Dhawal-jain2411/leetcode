class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;
        unsigned int limit=1;
        while(limit<=n){
            if(limit == n) return true;
            else limit<<=1;
        }
        return false;
    }
};