class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        l=1
        while l<=n:
            if l==n:
                return True
            else:
                l<<=1
        return False