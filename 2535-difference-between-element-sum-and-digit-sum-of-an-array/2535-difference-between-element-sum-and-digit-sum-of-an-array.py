class Solution:
    def differenceOfSum(self, nums: list[int]) -> int:
        n = len(nums)
        es=0
        ds=0
        for i in range(0,n):
            es+= nums[i]
            if nums[i] // 10 > 0 :
                temp = nums[i]
                while temp > 0:
                    ds += temp % 10
                    temp //= 10
            else : 
                ds += nums[i]
        return es-ds