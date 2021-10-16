class Solution {
    fun generateParenthesis(n: Int): List<String> {
        val result: MutableList<String> = ArrayList()
        generateParenthesis(result, "", 0, 0, n)
        return result
    }

    private fun generateParenthesis(
        result: MutableList<String>,
        s: String,
        open: Int,
        close: Int,
        n: Int
    ) {
        if (open == n && close == n) {
            result.add(s)
            return
        }
        if (open < n) {
            generateParenthesis(result, "$s(", open + 1, close, n)
        }
        if (close < open) {
            generateParenthesis(result, "$s)", open, close + 1, n)
        }
    }
}
