class Solution {
public:
    bool isPalindrome(string s) {
        int st=0,end=s.length()-1;
        bool ispal=true;
        while(st<end){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[end])){
                ispal= false;
                break;
            }
            st++;
            end--;
        }
        return ispal;
    }
};