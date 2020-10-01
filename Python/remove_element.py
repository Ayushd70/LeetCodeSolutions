class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        y = nums.count(val)
        for x in range(y):
            nums.remove(val)
        return (len(nums))
