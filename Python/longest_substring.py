# Problem Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

from typing import List

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        """
        Time: O(n) — we make a single pass through the string (sliding window approach)
        Space: O(min(n, m)) — dictionary to store characters and their most recent index, 
        where n is the length of the string and m is the size of the character set
        """
        # Initialize a dictionary to store the most recent index of characters
        char_index_map = {}
        left = 0  # Left boundary of the sliding window
        max_length = 0  # Maximum length of the substring found
        
        # Iterate through the string with the right boundary of the window
        for right, char in enumerate(s):
            # If the character is in the window (and its index is >= left pointer), move the left pointer
            if char in char_index_map and char_index_map[char] >= left:
                left = char_index_map[char] + 1  # move left to avoid repeating character
            
            # Update the most recent index of the character
            char_index_map[char] = right
            
            # Calculate the maximum length of the current window
            max_length = max(max_length, right - left + 1)
        
        return max_length

# Example test cases for local testing
if __name__ == "__main__":
    s = Solution()
    tests = [
        ("abcabcbb", 3),  # "abc" is the longest substring without repeating characters
        ("bbbbb", 1),     # Only one unique character, so longest substring is of length 1
        ("pwwkew", 3),    # "wke" is the longest substring without repeating characters
    ]
    for inp, expected in tests:
        out = s.lengthOfLongestSubstring(inp)
        print(f"Input: {inp} => Output: {out} {'OK' if out == expected else f'FAIL (expected {expected})'}")
