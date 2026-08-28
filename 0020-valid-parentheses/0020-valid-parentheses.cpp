class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
         unordered_map<char, char> matchingPair = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char c : s) {
             if (matchingPair.count(c)) {
                if (st.empty() || st.top() != matchingPair[c]) {
                    return false;
                }
                st.pop();
            } 
            else {
                 st.push(c);
            }
        }
        return st.empty();
    }
};