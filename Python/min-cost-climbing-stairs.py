class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        c = len(cost)
        dp = [-1] * (c + 2)
        dp[c] = dp[c + 1] = 0
        for n in range(c - 1, -1, -1):
            dp[n] = cost[n] + min(dp[n + 1], dp[n + 2])
        return min(dp[0], dp[1])
