# Problem Link: https://leetcode.com/problems/reverse-integer/

class Solution:
    def reverse(self, x: int) -> int:
        # Handle the negative sign
        sign = -1 if x < 0 else 1
        x *= sign
        
        # Reverse the digits
        reversed_x = int(str(x)[::-1])
        
        # Return the reversed integer with the correct sign
        if reversed_x > 2**31 - 1:  # Overflow check for 32-bit integer
            return 0
        return sign * reversed_x

# Example test case
if __name__ == "__main__":
    s = Solution()
    print(s.reverse(123))  # 321
    print(s.reverse(-123))  # -321
    print(s.reverse(120))  # 21
