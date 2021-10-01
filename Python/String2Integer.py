class Solution:
    def myAtoi(self, s: str) -> int:
        if not s.strip(): return 0        
        r = s.strip()[0]*(s.strip()[0] in '+-')            
        for x in s.strip()[len(r):].lstrip('0'):
            if x.isnumeric():
                r+=x
            else:
                break
        try:
            return max(min(int(r),2147483647),-2147483648)
        except:
            return 0
