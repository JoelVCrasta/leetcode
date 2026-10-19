class Solution(object):
    def twoSum(self, nums, target):
        lookback = {}

        for i, n in enumerate(nums):
            diff = target - n

            if diff in lookback:
                return [lookback[diff], i]

            lookback[n] = i
                

                