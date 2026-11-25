class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        dict1 = {}
        for a in nums:
            dict1[a] = dict1.get(a, 0) + 1

        for k, v in dict1.items():
            if v == 1:
                return k
