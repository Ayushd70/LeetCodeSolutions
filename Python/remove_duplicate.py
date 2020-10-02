class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        pos = 0
        temp = None  
        for num in nums:
            if num != temp:
                nums[pos] = num
                temp = num
                pos += 1
                
        return pos