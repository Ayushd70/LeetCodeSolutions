class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        for (n in 0 until nums.size) {
            for (m in n + 1 until nums.size) {
                if (nums[n] + nums[m] == target) {
                    return intArrayOf(n, m)
                }
            }
        }

        throw IllegalArgumentException("No feasible solution possible")
    }
}
