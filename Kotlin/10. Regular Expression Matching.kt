class Solution {
    fun isMatch(s: String, p: String): Boolean {
        val rows = s.length
        val columns = p.length
        if (rows == 0 && columns == 0) {
            return true
        } else if (columns == 0) {
            return false
        }
        val dp = Array(rows + 1) { BooleanArray(columns + 1) }
        dp[0][0] = true
        (2 until columns + 1)
            .filter { p[it - 1] == '*' }
            .forEach { dp[0][it] = dp[0][it - 2] }
        (1 until rows + 1).forEach { i ->
            (1 until columns + 1).forEach { j ->
                if (s[i - 1] == p[j - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1]
                } else if (j > 1 && p[j - 1] == '*') {
                    dp[i][j] = dp[i][j - 2]
                    if (p[j - 2] == '.' || p[j - 2] == s[i - 1]) {
                        dp[i][j] = dp[i][j] or dp[i - 1][j]
                    }
                }
            }
        }
        return dp[rows][columns]
    }
}
