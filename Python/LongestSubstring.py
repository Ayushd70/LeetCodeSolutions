class Solution(object):
    def lengthOfLongestSubstring(self, s):
        chars = {}
        L = len(s)
        start = 0
        max_len = 0
        for i in range(L):
            if s[i] in chars:
                max_len = max(max_len,i-start)
                start = max(start,chars[s[i]]+1)
            chars[s[i]] = i
        max_len = max(max_len,L-start)
        return max_len
