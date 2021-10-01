from collections import deque
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        dq = deque()
        dq.append(["(", 1, 0])
        ans = []
        while dq:
            comb, left, right = dq.popleft()
            if left == n and right == n:
                ans.append(comb)
                continue
            if left == right:
                dq.append([comb + "(", left + 1, right])
            elif left == n:
                dq.append([comb + ")", left, right + 1])
            else:
                dq.append([comb + "(", left + 1, right])
                dq.append([comb + ")", left, right + 1])
                
        return ans
