class Solution:
    def minimumSum(self, num: int) -> int:
        l=[]
        while ( num> 0):
            l.append(num % 10)
            num //= 10
        
        l.sort()
        return (l[0]+l[1])*10+l[2]+l[3]