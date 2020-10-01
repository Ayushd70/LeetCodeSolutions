class Solution:

    def convert(self, s, numRows):
        L = len(s)
        s_zigzag = ''
        if L == 0:
            return ''
        if numRows == 1:
            return s

        pivots = range(0,L+2*numRows-2,2*numRows-2)
        for p in pivots:
            s_zigzag +=  self.get_char(s,L,p)
        for diff in range(1,numRows-1):
            s_zigzag += self.get_char(s,L,pivots[0]+diff)
            for p in pivots[1:]:
                s_zigzag += self.get_char(s,L,p-diff)
                s_zigzag += self.get_char(s,L,p+diff)
        for p in pivots:
            s_zigzag += self.get_char(s,L,p+numRows-1)
        return s_zigzag

    def get_char(self,s,L,index):
        if index > L-1:
            return ''
        return s[index]
