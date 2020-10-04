class Solution {
    public int maxProfit(int[] prices) {
        int maxProf = 0, j = 0;
        for (int i = 1; i < prices.length; i ++){
          int compare = prices[i] - prices[j];
          if(compare > maxProf){
            maxProf = compare;
          }     
          if(prices[i] < prices[j])
              j = i;
        }
        return maxProf;
    }
}