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
            else:
                if not stack or pairs[ss] != stack[-1]:
                    return False

                stack.pop()
        
        return len(stack) == 0
