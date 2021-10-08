class Solution(object):
    def replaceDigits(self, s):
        """
        :type s: str
        :rtype: str
        """
        ans = ""
        
        for i in range(len(s)):
            if ord(s[i])>96 and ord(s[i])<123:
                ans=ans+s[i]
            else:
                ans=ans+(chr(ord(s[i-1])+int(s[i])))
        return ans
