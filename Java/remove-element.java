class Solution {
    public int removeElement(int[] nums, int val) {
        int n = 0;
        for (int m = 0; m < nums.length; m++) {
            if (nums[m] != val) {
                nums [n]=nums[m];
                n++;
            }
        }
        return n;
    }
}
