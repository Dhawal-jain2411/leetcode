class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sum=0
        prod=1
        temp=n
        while(temp>0):
            a =temp%10
            sum+=a
            prod *= a
            temp//=10
        
        return prod-sum