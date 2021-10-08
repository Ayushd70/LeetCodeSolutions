class Solution(object):
    def sumBase(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: int
        """
        ans = 0
        while (n >= k):
            ans += n%k
            n //= k
        return ans + n
