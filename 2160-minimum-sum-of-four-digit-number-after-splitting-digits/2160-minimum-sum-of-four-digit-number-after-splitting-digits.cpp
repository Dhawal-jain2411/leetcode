class Solution {
public:
    int minimumSum(int num) {
        vector<int> l;
        while(num> 0 ){
            l.push_back(num%10);
            num/=10;
        }
        sort(l.begin(),l.end()) ;
        return (l[0]+l[1])*10 + l[2]+l[3];
    }
};