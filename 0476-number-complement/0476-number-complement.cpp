class Solution {
public:
    int findComplement(int num) {
        unsigned int limit=1;
        while(limit <= num){
            limit<<=1;
        }
        return num^(limit-1);
    }
};