class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        if (numSet.size() < 2) return numSet.size();

        int longestSequence = 0;

        for (int n : numSet) {
            if (!numSet.count(n - 1)) {
                int length = 0;

                while (numSet.count(n)) {
                    length++;
                    n++;
                }

                if (length > longestSequence) {
                    longestSequence = length;
                }
            }
        }

        return longestSequence;
    }
};