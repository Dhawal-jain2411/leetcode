class Solution {
public:
 int count_1(int n) {
         int count =0;
         while (n>=1){
            count+= n%2;
            n/=2;
         }

         return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i =0; i< n+1; i++){
            ans.push_back(count_1(i));
            
        }
        return ans;
    }
};