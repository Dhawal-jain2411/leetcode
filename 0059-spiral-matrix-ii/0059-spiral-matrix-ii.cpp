class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans (n,vector<int>(n,0));
        int srow=0,erow=n-1,scol=0,ecol=n-1,value=1;
        
        while(srow<=erow && scol<=ecol){
            for(int i =scol;i<=ecol;i++){
                ans[srow][i]=value++;
                
            }
            if(srow==erow){
                    break;
                }
            for(int i =srow+1;i<=erow;i++){
                ans[i][ecol]=value++;
                
            }
            if(scol==ecol){
                    break;
                }
            for(int i =ecol-1;i>=scol;i--){
                ans[erow][i]=value++;
                
            }
            for(int i =erow-1;i>=srow+1;i--){
                ans[i][scol]=value++;
            }

            srow++;
            erow--;
            scol++;
            ecol--;
        }
       
        return ans;
    }
};