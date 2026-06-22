class Solution {
public:
    bool validPalindrome(string s) {
        int st = 0;
        int e = s.length() - 1;
        
        while (st < e) {
            if (s[st] != s[e]) {
                
                int i1 = st + 1;
                int j1 = e;
                bool valid1 = true;
                while (i1 < j1) {
                    if (s[i1] != s[j1]) {
                        valid1 = false;
                        break; 
                    }
                    i1++;
                    j1--;
                }
                
                int i2 = st;
                int j2 = e - 1;
                bool valid2 = true;
                while (i2 < j2) {
                    if (s[i2] != s[j2]) {
                        valid2 = false;
                        break; 
                    }
                    i2++;
                    j2--;
                }
                
                return valid1 || valid2;
            }
            
            st++;
            e--;
        }
        
        return true;
    }
};