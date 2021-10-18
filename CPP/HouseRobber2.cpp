// Leetcode Problem : 213 House Robber II
// Link : (https://leetcode.com/problems/house-robber-ii/)
 
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        // if there are no houses we can't rob any money
        if (nums.size() == 0)
            return 0;
        // if there is only one house we rob only that
        if (nums.size() == 1)
            return nums[0];
        // if there are only 2 house we rob the one that has maximum cash
        if (nums.size() == 2)
            return max(nums[0], nums[1]);

        // else we use dp approach
        vector<int> dp(nums.size());
        vector<int> dp2(nums.size());
        dp[0] = nums[0];
        dp[1] = nums[0];

        dp2[0] = 0;
        dp2[1] = nums[1];
        for (int i = 2; i < nums.size(); i++)
        {
            dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
            dp2[i] = max(nums[i] + dp2[i - 2], dp2[i - 1]);
        }

        return max(dp[nums.size() - 2], dp2[nums.size() - 1]);
    }
};
