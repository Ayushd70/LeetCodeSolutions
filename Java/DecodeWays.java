class Solution {
    public int numDecodings(String s) {
        int dp[] = new int[s.length()];
        if(s.charAt(0)!='0')
        dp[0] = 1;
        
        for(int i=1;i<dp.length;i++)
        {
            char a = s.charAt(i);
            char b = s.charAt(i-1);
            
            if(a=='0'&&b=='0')
            {
                dp[i] = 0;
            }
            else if(a=='0'&&b!='0')
            {
                if(b=='1'||b=='2')
                {
                    dp[i] = (i>=2 ? dp[i-2]:1);
                }
            }
            else if(a!='0'&&b=='0')
            {
                dp[i] = dp[i-1];
            }
            else
            {
                int x = Integer.parseInt(s.substring(i-1,i+1));
                if(x<=26)
                {
                    dp[i] = dp[i-1] + (i>=2?dp[i-2]:1);
                }
                else
                {
                    dp[i] = dp[i-1];
                }
            }
        }
        return dp[s.length()-1];
    }
}
