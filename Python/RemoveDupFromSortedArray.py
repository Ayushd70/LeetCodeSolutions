class Solution(object):
    def removeDuplicates(self, nums):
        if nums == []:
            return 0

        current_element = nums[0]
        scan_index = 1
        fill_index = 1

        while scan_index < len(nums):
            if nums[scan_index] != current_element:
                nums[fill_index] = nums[scan_index]
                fill_index += 1
                current_element = nums[scan_index]
            scan_index += 1

        return fill_index
