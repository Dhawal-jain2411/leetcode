class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
                auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        for (int i = left; i <= right; i++) {
            if (isVowel(words[i].front()) && isVowel(words[i].back())) {
                count++;
            }
        }
        
        return count;
    }
};