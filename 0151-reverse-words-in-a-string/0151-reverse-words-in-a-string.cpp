class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.length();
        int write = 0; 

        for (int read = 0; read < n; ++read) {
            if (s[read] != ' ') {
                if (write != 0) {
                    s[write] = ' ';
                    write++;
                }
                int start = write;
                while (read < n && s[read] != ' ') {
                    s[write] = s[read];
                    write++;
                    read++;
                }
                reverse(s.begin() + start, s.begin() + write);
                read--; 
            }
        }
        s.resize(write);
        return s;
    }
};
