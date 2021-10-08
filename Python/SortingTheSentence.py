class Solution(object):
    def sortSentence(self, s):
        """
        :type s: str
        :rtype: str
        """
        numbers = [int(i) for i in s if i.isdigit()]
        
        numbers.sort()
        
        s_split = s.split()
        
        n_s = []
        
        for number in numbers:
            for word in s_split:
                if str(number) in word:
                    word = "".join([i for i in word if not i.isdigit()])
                    n_s.append(word)
        
        return " ".join(n_s)
        
