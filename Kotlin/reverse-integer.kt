class Solution {
    fun reverse(x: Int): Int {
        var final = 0
        var num = x
        while (num != 0) {
            if (Math.abs(final) > Int.MAX_VALUE/10) return 0

            final = final*10 + num % 10
            num /= 10
        }
        return final
    }
}
