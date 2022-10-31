class Solution:
    def shortestPath(self, graph: List[List[int]], k: int) -> int:
        m, n = len(graph), len(graph[0])
        if k >= m + n - 2:
            return m + n - 2
        dr = [ -1, 0, 1, 0]
        dc = [ 0, 1, 0, -1]
        q = collections.deque()
        q.append((0, 0, k))
        s = set()
        s.add((0, 0, k))
        
        ans = 0
        
        while q:
            for _ in range(len(q)):
                x, y, k = q.popleft()
                if x == m - 1 and y == n - 1:
                    return ans
                for i in range(4):
                    ax = x + dr[i]
                    ay = y + dc[i]
                    if ax < 0 or ay < 0 or ax == m or ay == n:
                        continue
                    ak = k - graph[x][y]
                    _a = (ax, ay, ak)
                    if ak >= 0 and _a not in s:
                        q.append(_a)
                        s.add(_a)
            ans += 1
        return -1
