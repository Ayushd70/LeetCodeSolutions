### Problem Link: https://leetcode.com/problems/first-missing-positive/

class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        numLen = len(nums)
        record = [0 for _ in range(numLen+1)]
        for i in range(numLen):
            if nums[i] <= 0 or nums[i] > numLen+1:
                continue
            record[nums[i]-1] = i+1 # i+1 can make sure 0 is default empty
        for j in range(numLen+1):
            if record[j] == 0:
                return j + 1
        return -1 # default wrong answer
        