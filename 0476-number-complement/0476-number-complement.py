class Solution:
    def findComplement(self, num: int) -> int:
        l = 1
        while l <= num:
            l <<= 1
        return num ^ (l - 1)