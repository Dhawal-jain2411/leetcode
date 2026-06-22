class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       
        int extra_number,missing_number;
        int n = grid.size();
        unordered_map<int,bool> order;
        for (int i=0; i< n ;i++){
            for(int j = 0 ; j < n ;j++){
                int t = grid[i][j];
                if( order[t] == true ){
                    extra_number = t; 
                }
                order[t]=true;
            }
        }
        for (int i =1;i<=n*n;i++){
            if(!order[i]){
                missing_number=i;
            }
        }
        vector<int> out={extra_number,missing_number};
        return out;
    }
};