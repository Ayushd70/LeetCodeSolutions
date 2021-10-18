//https://leetcode.com/problems/two-sum/

class Solution {
    public int[] twoSum(int[] nums, int target) {
        if(2 > nums.length ||nums.length> 10000 || -1000000000> target || target> 1000000000 ){return null;}
    int[] ans=new int[2];
        for (int i = 0; i < nums.length; i++) {
            for (int j = i+1; j < nums.length; j++) {
                if((target-nums[i])==nums[j]){
                    ans[0]=i;
                    ans[1]=j;
                }
            }
        }
        return ans;
    }
}