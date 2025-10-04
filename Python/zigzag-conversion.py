# Problem Link: https://leetcode.com/problems/zigzag-conversion/

class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1 or numRows >= len(s):
            return s
        
        # Create a list of empty strings for each row
        rows = [''] * numRows
        current_row, going_down = 0, False
        
        # Iterate through each character in the string
        for char in s:
            rows[current_row] += char
            # Change direction when reaching the first or last row
            if current_row == 0 or current_row == numRows - 1:
                going_down = not going_down
            current_row += 1 if going_down else -1
        
        # Join all rows together to form the final string
        return ''.join(rows)

# Example test case
if __name__ == "__main__":
    s = Solution()
    print(s.convert("PAYPALISHIRING", 3))  # "PAHNAPLSIIGYIR"
