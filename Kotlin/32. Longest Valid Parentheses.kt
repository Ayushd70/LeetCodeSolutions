class Solution {
    fun longestValidParentheses(s: String): Int {
        var count = 0
        var left = 0
        var right = 0
        s.forEach { element ->
            when (element) {
                '(' -> left++
                ')' -> right++
            }
            if (left == right) {
                count = count.coerceAtLeast(left + right)
            }
            if (right > left) {
                right = 0
                left = 0
            }
        }
        right = 0
        left = 0
        (s.length - 1 downTo 0).forEach { i ->
            when (s[i]) {
                '(' -> left++
                ')' -> right++
            }
            if (left == right) {
                count = count.coerceAtLeast(left + right)
            }
            if (left > right) {
                right = 0
                left = 0
            }
        }
        return count
    }
}
