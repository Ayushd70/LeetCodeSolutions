class Solution(object):
    def isMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        count = 0  # used for complexity check
        p_ptr, s_ptr, last_s_ptr, last_p_ptr = 0, 0, -1, -1
        while s_ptr < len(s):
            if p_ptr < len(p) and (s[s_ptr] == p[p_ptr] or p[p_ptr] == '?'):
                s_ptr += 1
                p_ptr += 1
            elif p_ptr < len(p) and p[p_ptr] == '*':
                p_ptr += 1
                last_s_ptr = s_ptr
                last_p_ptr = p_ptr
            elif last_p_ptr != -1:
                last_s_ptr += 1
                s_ptr = last_s_ptr
                p_ptr = last_p_ptr
            else:
                assert(count <= (len(p)+1) * (len(s)+1))
                return False
            count += 1  # used for complexity check
 
        while p_ptr < len(p) and p[p_ptr] == '*':
            p_ptr += 1
            count += 1  # used for complexity check

        assert(count <= (len(p)+1) * (len(s)+1))
        return p_ptr == len(p)
