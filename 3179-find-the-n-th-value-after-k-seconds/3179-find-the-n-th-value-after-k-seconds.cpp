class Solution {
    void lsum(vector<int> &ans, int MOD) {
        int left = 0;
        for(int j = 0; j < ans.size(); j++){
            ans[j] = (ans[j] + left) % MOD;
            left = ans[j];
        }
    }
    
public:
    int valueAfterKSeconds(int n, int k) {
        const int MOD = 1e9 + 7; 
        vector<int> ans(n, 1);
        
        for(int i = 0; i < k; i++){
            lsum(ans, MOD);
        }
        
        return ans[n - 1]; 
    }
};