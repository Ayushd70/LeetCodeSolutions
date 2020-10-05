class Solution(object):
    def match(self, s, i, p, j):
        if i == len(s) or j == len(p):
            return False
        
        return p[j] == '.' or s[i] == p[j]
    
    def helper(self, s, i, p, j):
        # Base Cases
        if j == len(p):
            return i == len(s)
        # to cover the case of "abc" ".*"
        if i > len(s):
            return False
        
        # 1. if second is * p[i+1]
        if j < len(p)-1 and p[j+1] == '*':
            # Zero means advance p[j+2]
            # one or more compare and advance if match
            return (self.match(s, i, p, j) and self.helper(s, i+1, p, j)) or self.helper(s, i, p, j+2)
        
        # 2. Match either same or '.'
        if self.match(s, i, p, j):
            return self.helper(s, i+1, p, j+1)
        
        # 3. No match or *
        return False
    
    def isMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        return self.helper(s, 0, p, 0)
