#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    char processStr(string s, long long k) {
        vector<long long> L(s.length(), 0);
        long long current_len = 0;
        
        // Pass 1: Forward calculation of lengths only (no actual strings)
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '#') {
                current_len *= 2;
            } else if (s[i] == '*') {
                if (current_len > 0) current_len--;
            } else if (s[i] == '%') {
                // Reversing doesn't change the length
            } else {
                current_len++; // Regular character
            }
            L[i] = current_len;
        }
        
        // Base case: If the final simulated string is empty or k is out of bounds
        if (current_len == 0 || k >= current_len || k < 0) {
            return '.';
        }
        
        // Pass 2: Work backwards to trace the index k
        long long curr_k = k;
        for (int i = s.length() - 1; i >= 0; i--) {
            long long prev_len = (i > 0) ? L[i-1] : 0;
            
            if (s[i] == '#') {
                if (prev_len > 0) {
                    // If the string doubled, map any index in the second half back to the first half.
                    curr_k %= prev_len; 
                }
            } else if (s[i] == '*') {
                // The character removed by '*' was at index (prev_len - 1).
                // It just passes backward unchanged.
            } else if (s[i] == '%') {
                if (prev_len > 0) {
                    // If it was reversed, flip the index mathematically.
                    curr_k = prev_len - 1 - curr_k; 
                }
            } else {
                // Normal character insertion
                if (curr_k == prev_len) {
                    return s[i]; // The index perfectly matches the insertion point!
                }
                // Otherwise, curr_k was smaller, meaning it belongs to an earlier prefix.
            }
        }
        
        return '.';
    }
};