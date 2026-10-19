class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """

        profit = 0
        min_price = 1e9

        for i in range(len(prices)):
            if prices[i] < min_price:
                min_price = prices[i]

            if prices[i] - min_price > profit:
                profit = prices[i] - min_price

        return profit

        