class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = nums[0];
        int currMax = 0;

        int minSum = nums[0];
        int currMin = 0;

        int totalSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            currMax = max(nums[i], currMax + nums[i]);
            maxSum = max(maxSum, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            minSum = min(minSum, currMin);

            totalSum += nums[i];
        }

        if (maxSum < 0) return maxSum;

        return max(maxSum, totalSum - minSum);
    }
};