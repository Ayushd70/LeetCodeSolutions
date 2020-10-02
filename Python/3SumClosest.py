# Problem Link: https://leetcode.com/problems/3sum-closest/submissions/

class Solution:
    def threeSumClosest(self, num: List[int], target: int) -> int:
        num.sort()
        error = float("infinity")
        if len(num)<3:
            return 0
        for i in range(0, len(num)-2):
            begin = i+1
            end = len(num)-1
            while begin<end:
                if abs(num[i]+num[begin]+num[end]-target) < error:
                    error = abs(num[i]+num[begin]+num[end]-target)
                    solution = num[i]+num[begin]+num[end]
                if num[i]+num[begin]+num[end] > target:
                    end -= 1
                else:
                    begin += 1
        return solution
        