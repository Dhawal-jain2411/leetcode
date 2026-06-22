class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n=min(word1.length(),word2.length());
        for(int i =0;i<n;i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        if(word1.length()==word2.length()) return ans;
        else if(word1.length()> word2.length()) ans.append(word1,n);
        else ans.append(word2,n);
        return ans;
    }
};