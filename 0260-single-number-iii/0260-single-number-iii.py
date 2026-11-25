class Solution:
    def singleNumber(self, nums: list[int]) -> list[int]:
        nums.sort()
        n = len(nums)
        ans=[]
        if nums[0] != nums[1]:
            ans.append(nums[0])        
        if nums[n-1] != nums[n-2]:
            ans.append( nums[n-1] ) 
        for i in range(1,n-1):
            if nums[i+1] != nums [i] and nums[i-1]!=nums[i]:
                ans.append(nums[i])
        return ans