class Solution {
public:
    int rob(vector<int>& nums) {
        int i,money=0;
        for(i=0;i<nums.size();i+=2)
            money=money+nums[i];
        return money;
    }
};
