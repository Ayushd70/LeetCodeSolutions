class Solution:
    def earliestFullBloom(self, plantTime: List[int], growTime: List[int]) -> int:
        a = list(sorted(list(zip(plantTime, growTime)), key=lambda x: -x[1]))
        ans = s = 0
        for x, y in a:
            s += x
            ans = max(ans, s + y)
        return ans
