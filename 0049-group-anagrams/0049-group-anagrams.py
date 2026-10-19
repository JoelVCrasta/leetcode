class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        
        groups = defaultdict(list)

        for s in strs:
            key = sorted(s)
            
            groups[str(key)].append(s)

        return [val for _, val in groups.items()]