class Solution:
    def search(self, nums: list[int], target: int) -> int:
        smallest = 1e9
        small_idx = 0
        for i in range(len(nums)):
            if nums[i] < smallest:
                smallest = nums[i]
                small_idx = i

        temp = nums[small_idx:] + nums[:small_idx]
        print(nums)

        i = 0
        j = len(nums) - 1

        while i <= j:
            mid = i + (j - i) // 2

            if temp[mid] == target:
                for k in range(len(temp)):
                    if nums[k] == target:
                        return k
            elif temp[mid] > target:
                j = mid - 1
            else:
                i = mid + 1

        return -1