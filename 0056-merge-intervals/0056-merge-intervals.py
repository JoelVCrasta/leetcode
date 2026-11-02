class Solution:
    def merge(self, intervals: list[list[int]]) -> list[list[int]]:
        intervals.sort()

        stk = [intervals[0]]
        for interval in intervals[1:]:
            if stk[-1][1] >= interval[0]:
                prev = stk.pop()
                stk.append([min(prev[0], interval[0]), max(prev[1], interval[1])])
            else:
                stk.append(interval)
        
        return stk


            