class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        n=len(nums)
        M_num=n*(n+1)//2
        sum=0
        for i in range(n):
            sum+= nums[i]
        return M_num - sum