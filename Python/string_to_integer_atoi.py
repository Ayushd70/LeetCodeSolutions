# Problem Link: https://leetcode.com/problems/string-to-integer-atoi/

class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.lstrip()  # Strip leading whitespaces
        if not s:
            return 0
        
        sign = 1
        if s[0] in ('+', '-'):
            sign = -1 if s[0] == '-' else 1
            s = s[1:]
        
        result = 0
        for char in s:
            if char.isdigit():
                result = result * 10 + int(char)
            else:
                break
        
        result *= sign
        
        # Handle 32-bit integer overflow
        if result < -2**31:
            return -2**31
        if result > 2**31 - 1:
            return 2**31 - 1
        
        return result

# Example test case
if __name__ == "__main__":
    s = Solution()
    print(s.myAtoi("42"))  # 42
    print(s.myAtoi("   -42"))  # -42
    print(s.myAtoi("4193 with words"))  # 4193
