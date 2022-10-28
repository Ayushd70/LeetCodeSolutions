class Solution:
    def myPow(self, x: float, n: int) -> float:
        value = 1
        if x == 0: return 0
        elif n == 0: return 1
        elif n < 0:
            while n < 0:
                value = value / x
                n += 1
            return value
        else:
            while n > 0:
                value = value * x
                n -= 1
            return value
