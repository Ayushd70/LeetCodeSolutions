class Solution:
    def largestOverlap(self, img1: List[List[int]], img2: List[List[int]]) -> int:
        h = collections.defaultdict(int)
        i1 = []
        i2 = []
        for i in range(len(img1)):
            for j in range(len(img1[0])):
                if img1[i][j]:
                    i1.append((i, j))
                if img2[i][j]:
                    i2.append((i, j))
        ans = 0
        for x in i1:
            for y in i2:
                z = (y[0] - x[0], y[1] - x[1])
                h[z] += 1
                ans = max(ans, h[z])
        return ans
