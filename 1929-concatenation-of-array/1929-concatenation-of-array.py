class Solution:
    def getConcatenation(self, nums: list[int]) -> list[int]:
        ans = nums
        n=len(nums)
        for i in range(n):
            ans.append(nums[i])
        return ans