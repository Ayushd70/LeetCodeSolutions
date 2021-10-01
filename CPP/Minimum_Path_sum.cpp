// https://leetcode.com/problems/minimum-path-sum/

class Solution {
public:
    int minPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m);
        for(int i=0; i<m; i++)
        dp[i] = vector<int>(n);
    
        for(int i=m-1; i>=0; i--)
        {
            for(int j=n-1; j>=0; j--)
            {
                if(i==m-1 && j==n-1)
                    dp[i][j] = matrix[i][j];
                else if(i==m-1)
                    dp[i][j] = dp[i][j+1] + matrix[i][j];
                else if(j==n-1)
                    dp[i][j] = dp[i+1][j] + matrix[i][j];
                else
                {
                    int minimum = min(dp[i+1][j], dp[i][j+1]);
                    dp[i][j] = minimum + matrix[i][j];
                }
            }
        }
        return dp[0][0];
    }
};