# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: list[ListNode | None]) -> ListNode | None:
        heap = []

        for l in lists:
            while l:
                heap.append(l.val)
                l = l.next

        heapq.heapify(heap)

        if not heap:
            return None

        result = ListNode(heapq.heappop(heap))
        temp = result
        while heap:
            node = ListNode(heapq.heappop(heap))
            temp.next = node
            temp = node

        return result
