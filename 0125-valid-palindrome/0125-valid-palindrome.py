class Solution(object):
    def isPalindrome(self, s):
        word = []

        for ss in s:
            if ss.isalnum():
                word.append(ss.lower())

        word = "".join(word)

        if word == word[::-1]:
            return True
        
        return False

        
        