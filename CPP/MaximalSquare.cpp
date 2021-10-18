class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
      
        int m =matrix.size();
        int n= matrix[0].size();
        int dp[m][n];
        
       int ans =  -1 ;
        
        for(int j = n- 1 ; j >= 0 ; j--)
        {
            for(int i = m-1 ;  i >= 0 ;  i--)
            {
  
          
              if( i == m - 1)
                {
                    dp[i][j] = matrix[i][j] - '0';
                }
                
               else  if(j == n -1 )
                {
                    
                    dp[i][j] = matrix[i][j] - '0';
                }
                
                else 
                {
 
                    if(matrix[i][j] == '0' )
                    dp[i][j] = 0;
 
                else 
                {
                    dp[i][j] = 1 + min(dp[i][j+1],min(dp[i+1][j],dp[i+1][j+1]));
                }
                    
                    
                }
                
               
                 ans = max(ans ,dp[i][j]);
            }
            
            
        }

        
        return ans * ans ;
 
    }
};
