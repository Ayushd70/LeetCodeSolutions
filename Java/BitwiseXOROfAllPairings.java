class Solution {
    public int xorAllNums(int[] nums1, int[] nums2) {
        int n1 = nums1.length, n2 = nums2.length;
        int v = 0;
        if (!isEven(n1)) {
            for (int x: nums2) v ^= x;
        }
        if (!isEven(n2)) {
            for (int x: nums1) v ^= x;
        }
        return v;
    }
    private boolean isEven(int x) {
        return (x&1) == 0;
    }
}
