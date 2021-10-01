class Solution:
    def countAndSay(self, n: int) -> str:
        result = "1"
        for _ in range(n - 1):
            s, curr_digit, count = "", result[0], 1
            for digit in result[1:]:
                if digit == curr_digit:
                    count += 1
                else:
                    s += str(count) + curr_digit
                    curr_digit, count = digit, 1
            result = s + str(count) + curr_digit
        return result
    
