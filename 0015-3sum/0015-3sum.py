class Solution(object):
    def threeSum(self, nums):
        result = []

        nums.sort()
        
        for i, num1 in enumerate(nums):
            seen = {}

            for num2 in nums[i+1:]:
                needed = -(num1 + num2)

                if needed in seen:
                    res = [num1, num2, needed]
                    if res not in result:
                        result.append(res)
                        del seen[needed]
                    continue
                
                seen[num2] = 1
        
        return result
                
