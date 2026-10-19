class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        pairs = { '}': '{', ']': '[', ')': '(' }
        stack = []

        for ss in s:
            if ss == '(' or ss == '[' or ss == '{':
                stack.append(ss)
                continue
            elif stack and pairs[ss] == stack[-1]:
                stack.pop()
                continue

            return False
        
        return len(stack) == 0
