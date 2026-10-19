class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        seen = {}
        longest = 0
        l_idx = 0

        for r_idx, char in enumerate(s):
            if char in seen and seen[char] >= l_idx:
                l_idx = seen[char] + 1

            seen[char] = r_idx
            longest = max(longest, r_idx - l_idx + 1)

        return longest