# Problem Link: https://leetcode.com/problems/longest-palindromic-substring/description/

class Solution:
    def longestPalindrome(self, s: str) -> str:
        """
        Time: O(n^2) — We expand around each center (which could be either a single character or a pair).
        Space: O(1) — Constant space, apart from the input string.
        """
        def expand_around_center(left: int, right: int) -> str:
            while left >= 0 and right < len(s) and s[left] == s[right]:
                left -= 1
                right += 1
            return s[left + 1:right]
        
        if not s:
            return ""
        
        longest = ""
        for i in range(len(s)):
            # Odd length palindromes (single character center)
            odd_palindrome = expand_around_center(i, i)
            # Even length palindromes (pair of characters center)
            even_palindrome = expand_around_center(i, i + 1)
            
            # Update the longest palindrome found
            longest = max(longest, odd_palindrome, even_palindrome, key=len)
        
        return longest

# Example test cases
if __name__ == "__main__":
    s = Solution()
    tests = [
        ("babad", "bab"),  # "bab" or "aba" are valid
        ("cbbd", "bb"),    # "bb"
        ("a", "a"),        # Single character string
        ("ac", "a"),       # Single character or "c" would be the longest palindrome
    ]
    for inp, expected in tests:
        out = s.longestPalindrome(inp)
        print(f"Input: {inp} => Output: {out} {'OK' if out == expected else f'FAIL (expected {expected})'}")
