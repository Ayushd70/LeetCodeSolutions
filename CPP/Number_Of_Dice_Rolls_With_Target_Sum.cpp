class Solution {
private:
    const unsigned int M=1000000007;
public:
    int numRollsToTarget(int d, int f, int target) {
        vector<vector<int>> dp(d+1,vector<int>(target+1,0));
        for(int j=1;j<=f&&j<=target;j++) 
            dp[1][j]=1;
        for(int i=2;i<=d;i++)
            for(int j=1;j<=target;j++)
                for(int k=1;k<=f&&k<j;k++)
                    dp[i][j]=(dp[i][j]%M+dp[i-1][j-k]%M)%M;
      
        return dp[d][target];
    }
};
