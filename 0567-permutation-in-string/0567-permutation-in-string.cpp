class Solution {
    bool valid(unordered_map<char , int> A,unordered_map<char , int> B){
        return A==B;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length()>s2.length()) return false;
        unordered_map<char , int> freq;
        for( auto a : s1){
            freq[a]++;
        }
        int winsize=s1.length();
        for ( int  i =0; i <= s2.size()-winsize; i ++){
            int wini=0,idx=i;
            unordered_map<char,int> win;
            while( wini<s1.length() && idx<s2.length()){
                win[s2[idx]]++;
                idx++;
                wini++;
            }
            if( valid(win,freq)){
                return true;
            }
        }
        return false;

    }
};