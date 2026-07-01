class Solution {
public:
    bool ispall(string p){
        string r=p;
        reverse(p.begin(),p.end());
        if(r==p) return true;
        else return false;
    }
    void helper(string s, vector<vector<string>> &ans, vector<string> partition){
        if(s.size()==0){
            ans.push_back(partition);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(ispall(part)){
                partition.push_back(part);
                helper(s.substr(i+1),ans,partition);
                partition.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> partition;
        vector<vector<string>> ans;
        helper(s,ans,partition);
        return ans;
    }
};