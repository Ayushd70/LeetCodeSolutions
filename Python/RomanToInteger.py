class Solution:
    def romanToInt(self, s):
        output = 0
        for i in range(0,len(s)):
            if s[i] == 'M':
                output += 1000
            elif s[i] == 'D':
                output += 500
            elif s[i] == 'L':
                output += 50
            elif s[i] == 'V':
                output += 5
            elif s[i] == 'C':
                if i != len(s)-1 and (s[i+1] == 'M' or s[i+1] == 'D'):
                    output -= 100
                else:
                    output += 100
            elif s[i] == 'X':
                if i != len(s)-1 and (s[i+1] == 'C' or s[i+1] == 'L'):
                    output -= 10
                else:
                    output += 10
            elif s[i] == 'I':
                if i != len(s)-1 and (s[i+1] == 'X' or s[i+1] == 'V'):
                    output -= 1
                else:
                    output += 1

        return output
