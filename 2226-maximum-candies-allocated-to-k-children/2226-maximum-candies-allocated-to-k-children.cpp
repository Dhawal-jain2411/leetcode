class Solution {
    bool validity(vector<int> & candies,long long k,int mid){
        long long count=0;
        for(int a: candies){
            count+=a/mid;
        }
        return count>=k;
    }
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum=0;
        int m=INT_MIN;
        for(int a : candies){
            m=max(m,a);
            sum+=a;
        }
        if(sum<k){
            return 0;
        }
        int st=1;
        int end = m;
        int ans;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(validity(candies,k,mid)){
                st=mid+1;
                ans=mid;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};