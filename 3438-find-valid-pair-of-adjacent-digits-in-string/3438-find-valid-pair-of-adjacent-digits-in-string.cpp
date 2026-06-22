class Solution {
public:
    string findValidPair(string s) {
        unordered_map<char,int> count;
        for (char c: s){
            count[c]++;
        }
        for(int i =0;i<s.length()-1;i++){
            int num1=s[i]-'0';
            int num2=s[i+1]-'0';
            if(num1!=num2){
                if(num1==count[s[i]] && num2 == count[s[i+1]]){
                    string ans={s[i],s[i+1]};
                    return ans;
                }
            }
        }
        return "";
    }
};