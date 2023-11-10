from heapq import heappop, heappush

class Solution:
    def maxResult(self, nums: List[int], k: int) -> int:
        n = len(nums)
        if n == 1: return nums[0]
        
        maxHeap = [(-nums[0], 0)]
        max_so_far = None
        
        for i in range(1, n):
            # print(sorted([ (-i[0], i[1]) for i in maxHeap]))
            
            while maxHeap[0][1] < i - k:
                heappop(maxHeap)
            
            max_so_far = maxHeap[0][0]
            heappush(maxHeap, (max_so_far - nums[i], i))
            
        return -(max_so_far - nums[i])
