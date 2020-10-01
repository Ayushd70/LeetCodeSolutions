class Solution(object):
    def singleNumber(self, nums):
        unique_nums = set(nums)
        for element in unique_nums:
            count = nums.count(element)
            if count == 1:
               return element
