class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        int dp[n][2];
        
        if(s[0]=='0')
            return 0; 
        
        dp[0][0]=1;dp[0][1]=0;
        
        for(int i=1;i<n;i++){
            if(s[i]=='0'){
                if(s[i-1]=='1' || s[i-1]=='2'){
                    dp[i][0] = 0 ;
                    dp[i][1] = dp[i-1][0] ;
                }
                
                else 
                    return 0;
            }
            
            else{
                dp[i][0] = dp[i-1][0] + dp[i-1][1] ;
                dp[i][1] = 0;
                if(stoi(s.substr(i-1,2))<=26)
                    dp[i][1] = dp[i-1][0] ;
            }
             
        }
        return dp[n-1][0]+dp[n-1][1];
    }
};