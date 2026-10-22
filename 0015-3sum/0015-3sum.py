class Solution(object):
    def threeSum(self, nums):
        result = []
        res_dict = {}

        nums.sort()
        
        for i, num1 in enumerate(nums):
            seen = {}

            for num2 in nums[i+1:]:
                needed = -(num1 + num2)

                if needed in seen:
                    res = [num1, num2, needed]
                    x = tuple(sorted(res))
                    if x not in res_dict:
                        result.append(res)
                        res_dict[x] = 1
                        del seen[needed]
                    continue
                
                seen[num2] = 1
        
        return result
                
