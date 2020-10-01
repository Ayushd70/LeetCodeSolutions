class Solution(object):
    def reverse(self, x):

        s = str(x)
        if s[0] == '-':
            s_reversed = '-'+s[:0:-1]
        else:    
            s_reversed = s[::-1]

        solution = int(s_reversed)
        if solution > 2**31 or solution < -2**31:
            solution = 0

        return solution
