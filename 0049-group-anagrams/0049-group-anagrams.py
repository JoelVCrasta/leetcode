from collections import Counter, defaultdict


class Solution(object):

  def groupAnagrams(self, strs):
    groups = defaultdict(list)
    for s in strs:
      # Counter objects are unhashable, so convert items to a sorted tuple for the key
      key = tuple(sorted(Counter(s).items()))
      groups[key].append(s)
    return list(groups.values())