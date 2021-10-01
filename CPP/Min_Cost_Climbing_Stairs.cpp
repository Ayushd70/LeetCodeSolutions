class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int dptable[cost.size()];
        
        dptable[0] = cost[0];
        dptable[1] = cost[1];
        
        for(int i=2;i<cost.size();i++){
            
            dptable[i] = cost[i] + min(dptable[i-1],dptable[i-2]);
        }
        
        return min(dptable[cost.size()-1],dptable[cost.size()-2]);
        
        
    }
};

