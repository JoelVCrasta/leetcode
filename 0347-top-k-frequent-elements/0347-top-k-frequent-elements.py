class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        
        freq = Counter(nums)
        heap = []
        for num, f in freq.items():
            heapq.heappush(heap, (-f, num))

        res = []
        for _ in range(k):
            res.append(heapq.heappop(heap)[1])

        return res