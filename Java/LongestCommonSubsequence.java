class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
        if (text2.length() > text1.length()) {
            String t = text1;
            text1 = text2;
            text2 = t;
        }
        int m = text1.length(), n = text2.length();
        int[] dp = new int[n+1];
        for (int i = 1; i <= m; ++i) {
            for (int j = 1, p = 0, np; j <= n; ++j) {
                np = dp[j];
                if (text1.charAt(i-1) == text2.charAt(j-1)) dp[j] = 1+p;
                else if (dp[j] < dp[j-1]) dp[j] = dp[j-1];
                p = np;
            }
            //System.out.println(Arrays.toString(dp));
        }
        return dp[n];
    }
}
