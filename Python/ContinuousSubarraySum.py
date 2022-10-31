class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        h = {0: -1}
        s = 0
        for i, n in enumerate(nums):
            s = (s + n) % k
            if s not in h:
                h[s] = i
            elif i - h[s] >= 2:
                return True
        return False
