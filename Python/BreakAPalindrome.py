class Solution:
    def breakPalindrome(self, palindrome: str) -> str:
        length = len(palindrome)
        palindrome = list(palindrome)
        if length <= 1:
            return ''
        for i in range(int(length/2)):
            if palindrome[i] != 'a':
                palindrome[i] = 'a'
                return (''.join(palindrome))
        palindrome[length-1] = 'b'
        return (''.join(palindrome))
