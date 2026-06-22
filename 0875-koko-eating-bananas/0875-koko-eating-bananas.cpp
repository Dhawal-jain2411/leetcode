class Solution {
    bool validity(vector<int> & piles,int mid,int h){
        long int count =0;
        for(int a : piles){
            count+= ((a-1)/mid)+1;
        }
        return count<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int M=INT_MIN;
        for(int a : piles){
            M=max(M,a);
        }
        if(h==piles.size()) return M;
        int st=1;
        int end=M;
        int ans=INT_MAX;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(validity(piles,mid,h)){
                end=mid-1;
                ans=mid;
            }else{
                st=mid+1;
            }

        }
        return ans;
    }
};