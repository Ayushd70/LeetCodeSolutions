class Solution {
    public int[] sortArrayByParityII(int[] nums) {
        int i = 0, j = 1, n = nums.length;
        while (i < n) {
            while (i < n && (nums[i]&1) == 0) i+=2;
            while (j < n && (nums[j]&1) == 1) j+=2;
            if (i < n) {
                swap(nums, i, j);
                i+=2; j += 2;
            }
        }
        return nums;
    }
    private void swap(int[] a, int i, int j) {
        if (a[i] == a[j]) return;
        a[i]^=a[j];a[j]^=a[i];
        a[i]^=a[j];
    }
}
