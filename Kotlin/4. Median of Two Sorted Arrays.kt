class Solution {
    fun findMedianSortedArrays(nums1: IntArray, nums2: IntArray): Double {
        if (nums1.size > nums2.size) {
            return findMedianSortedArrays(nums2, nums1)
        }
        val m = nums1.size
        val n = nums2.size
        var start = 0
        var end = m
        while (start <= end) {
            val partitionNums1 = (start + end) / 2
            val partitionNums2 = (m + n + 1) / 2 - partitionNums1
            val maxLeftNums1 = if (partitionNums1 == 0) Int.MIN_VALUE else nums1[partitionNums1 - 1]
            val minRightNums1 = if (partitionNums1 == m) Int.MAX_VALUE else nums1[partitionNums1]
            val maxLeftNums2 = if (partitionNums2 == 0) Int.MIN_VALUE else nums2[partitionNums2 - 1]
            val minRightNums2 = if (partitionNums2 == n) Int.MAX_VALUE else nums2[partitionNums2]
            if (maxLeftNums1 <= minRightNums2 && maxLeftNums2 <= minRightNums1) {
                return if ((m + n) % 2 == 0) {
                    (maxLeftNums1.coerceAtLeast(maxLeftNums2) + minRightNums1.coerceAtMost(
                        minRightNums2
                    )) / 2.0
                } else {
                    maxLeftNums1.coerceAtLeast(maxLeftNums2).toDouble()
                }
            } else if (maxLeftNums1 > minRightNums2) {
                end = partitionNums1 - 1
            } else {
                start = partitionNums1 + 1
            }
        }
        throw IllegalArgumentException()
    }
}
