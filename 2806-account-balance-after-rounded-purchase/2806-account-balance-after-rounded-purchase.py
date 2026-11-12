class Solution:
    def accountBalanceAfterPurchase(self, purchaseAmount: int) -> int:
        left = 100 - purchaseAmount
        if (left % 10 > 5): return ((left // 10) + 1 )* 10
        else: return ((left // 10) )* 10
