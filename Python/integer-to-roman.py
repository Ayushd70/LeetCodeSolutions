class Solution:
    def intToRoman(self, n: int) -> str:
        symbols = [["I", 1], ["IV", 4], ["V", 5], ["IX", 9], ["X", 10], ["XL", 40], ["L", 50], ["XC",90], ["C", 100], ["CD", 400], ["D", 500], ["CM", 900],["M", 1000]]
        final = ""
        for symbols, v in reversed (symbols):
            if n // v:
                count = n // v
                final += (symbols* count)
                n = n % v
        return final
