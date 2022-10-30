class Solution:
    def isValid(self, s: str) -> bool:
        n=0
        for ch in s:
            n=n+1
            if ch=="(":
                if s[n]==")":
                    return True
                else: return False
            elif ch=="[":
                if s[n]=="]":
                    return True
                else: return False
            elif ch=="{":
                if s[n]=="}":
                    return True
                else: return False
            else: return False
