class Solution:
    def jump(self, arr):
        lastMaxReach, currentMaxReach = 0, 0
        nJump, i = 0, 0
        while currentMaxReach < len(arr)-1:
            while i <= lastMaxReach:
                currentMaxReach = max(i+arr[i], currentMaxReach)
                i+=1
            if lastMaxReach == currentMaxReach:
                return -1
            lastMaxReach = currentMaxReach
            nJump+=1
        return nJump